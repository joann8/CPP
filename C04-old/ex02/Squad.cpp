#include "Squad.hpp"

Squad::Squad(void) : _count(0), _units(NULL)
{
	return;
}

Squad::Squad(Squad const & src)
{
	*this = src;
	return;
}

Squad::~Squad(void)
{
	int i;

	i = 0;
	while (i < this->_count)
	{
		delete this->_units[i];
		i++;
	}
	if (this->_count != 0)
		delete [] this->_units;
	return;
}

Squad & Squad::operator=(Squad const & src)
{
	int i;

	this->_count = src._count;
	if (this->_count == 0)
		this->_units = NULL;
	else
	{
		this->_units = new ISpaceMarine* [this->_count];
		i = 0;
		while (i < this->_count)
		{
			this->_units[i] = src._units[i]->clone();
			i++;
		}
	}
	return *this;
}

int Squad::getCount(void) const
{
	return this->_count;
}

ISpaceMarine * Squad::getUnit(int n) const
{
	if (n < 0 || this->_count < n)
		return NULL;
	else
		return this->_units[n];
}

int	Squad::push(ISpaceMarine * new_marine)
{
	int i;

	if (new_marine == NULL)
		return this->_count;
	
	i = 0;
	while (i < this->_count)
	{
		if (new_marine == this->_units[i])
			return this->_count;
		i++;
	}
	
	ISpaceMarine** new_units = new ISpaceMarine*[this->_count + 1];
	i = 0;
	while (i < this->_count)
	{
		new_units[i] = this->_units[i];
		i++;
	}
	new_units[this->_count] = new_marine;
	if (this->_count != 0) 
	{
		delete [] this->_units;
	}
	this->_count += 1;
	this->_units = new_units;
	return this->_count;
}
