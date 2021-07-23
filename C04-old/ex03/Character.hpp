#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <string>


class Character : public ICharacter
{
	public:
		Character(void);
		Character(std::string name);
		Character(Character const & src);
		virtual	~Character(void);
		Character & operator=(Character const & src);

		std::string const & getName(void) const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter & target);

	private:
		std::string _name;
		AMateria* _materials[4];
		int	_nb_mat;
};

#endif
