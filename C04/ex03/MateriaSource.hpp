#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & src);
		virtual ~MateriaSource(void);
		MateriaSource & operator=(MateriaSource const & src);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
		
	protected:
		AMateria *_materials[4];
		int	_nb_mat;
};

#endif
