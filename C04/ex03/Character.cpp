#include "Character.hpp"

Character::Character(void) : _name("default"), _nb_mat(0)
{
	int i;

	i = 0;
	while (i < 4)
	{
		this->_materials[i] = NULL;
		this->_mat_usable[i] = 0;
		i++;
	}
	return;
}

Character::Character(std::string name) : _name(name), _nb_mat(0) 
{
	int i;

	i = 0;
	while (i < 4)
	{
		this->_materials[i] = NULL;
		this->_mat_usable[i] = 0;
		i++;
	}
	return;
}

Character::Character(Character const & src)
{
	int i;

	i = 0;
	this->_nb_mat = src._nb_mat;
	this->_name = getName();
	while (i < this->_nb_mat)
	{
		this->_materials[i] = src._materials[i]->clone();	
		this->_mat_usable[i] = src._mat_usable[i];
		i++;
	}
	while(i < 4)
	{
		this->_materials[i] = NULL;
		this->_mat_usable[i] = src._mat_usable[i];
		i++;
	}
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
	this->_name = getName();
	i = 0;
	while (i < this->_nb_mat)
	{
		this->_materials[i] = src._materials[i]->clone();
		this->_mat_usable[i] = src._mat_usable[i];
		i++;
	}
	while (i < 4)
	{
		this->_materials[i] = NULL;
		this->_mat_usable[i] = src._mat_usable[i];
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
	int i;
	i = 0;
	while (i < this->_nb_mat)
	{
		if (this->_materials[i]->getType() == m->getType())
		{
			delete this->_materials[i];
			this->_materials[i] = m;
			this->_mat_usable[i] = 1;
			return;
		}
		i++;
	}
	this->_materials[this->_nb_mat] = m;
	this->_mat_usable[this->_nb_mat] = 1;
	this->_nb_mat += 1;
	return;
}

void Character::unequip(int idx)
{
	if (idx < 0 | idx >= this->_nb_mat)
	{
	//	std::cout << "No material at this index" << std::endl;
		return;
	}
	this->_mat_usable[idx] = 0;	
	return;
}

void Character::use(int idx, ICharacter & target)
{
	if (idx < 0 || idx >= this->_nb_mat)
	{
	//	std::cout << "No material at this index" << std::endl;
		return;
	}
	else if (this->_mat_usable[idx] == 0)
	{
	//	std::cout << "This material is not usable" << std::endl;
		return;
	}
	else
		this->_materials[idx]->use(target);
	return;
}
