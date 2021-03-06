#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _nb_mat(0)
{
	int i;

	i = 0;
	while (i < 4)
	{
		this->_materials[i] = NULL;
		i++;
	}
	return;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	int i;

	i = 0;
	this->_nb_mat = src._nb_mat;
	while (i < this->_nb_mat)
	{
		this->_materials[i] = src._materials[i]->clone();
		i++;
	}
	while (i < 4)
	{
		this->_materials[i] = NULL;
		i++;
	}
	return;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src)
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
	while (i < 4)
	{
		this->_materials[i] = NULL;
		i++;
	}
	return *this;
}

MateriaSource::~MateriaSource(void)
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

void MateriaSource::learnMateria(AMateria * src)
{
	if (src == NULL || this->_nb_mat == 4) 
		return;
	this->_materials[this->_nb_mat] = src->clone();
	this->_nb_mat += 1;
	return;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	int i;
	
	i = 0;
	while (i < this->_nb_mat)
	{
		if (this->_materials[i]->getType() == type)
			return this->_materials[i]->clone();
		i++;
	}
	return NULL;
}
