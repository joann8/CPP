#include "Character.hpp"

Character::Character(void) : _name("default"), _nb_mat(0)
{
	return;
}

Character::Character(std::string name) : _name(name), _nb_mat(0)
{
	return;
}

Character::Character(Character const & src)
{
	*this = src;
	return;
}

Character::~Character(void)
{
	int i;

	i = 0;
	while (i < this->_nb_mat)
	{
		delete this->_materials[i];
		i++;
	}
	return;
}

Character & Character::operator=(Character const & src)
{
	int i;

	i = 0;
	while (i < this->_nb_mat)
	{
		delete this->_materials[i];
		i++;
	}
	this->_nb_mat = src._nb_mat;
	i = 0;
	while (i < this->_nb_mat)
	{
		this->_materials[i] = src._materials[i]->clone();
		i++;
	}
	return *this;
}

std::string const & Character::getName(void) const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	if (m == NULL || this->_nb_mat == 4)
		return;
	this->_materials[this->_nb_mat] = m;
	this->_nb_mat += 1;
	return;
}

void Character::unequip(int idx)
{
	int i;

	if (idx < 0 | idx >= this->_nb_mat)
		return;
	i = idx;
	while (i < this->_nb_mat -1)
	{
		this->_materials[i] = this->_materials[i + 1];
		i++;
	}
	this->_nb_mat -= 1;
	return;
}

void Character::use(int idx, ICharacter & target)
{
	if (idx < 0 || idx >= this->_nb_mat)
		return;
	this->_materials[idx]->use(target);
	return;
}
