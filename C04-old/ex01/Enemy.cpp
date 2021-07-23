 #include "Enemy.hpp"

 Enemy::Enemy(void) : _hp(0), _type("defaut_type")
 {
	return ;
}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
	return ;
}

Enemy::Enemy(Enemy const & src)
 {
 	*this = src;
	return ;
}

Enemy::~Enemy(void)
{
	return ;
}

Enemy & Enemy::operator=(Enemy const & src)
{
	this->_type = src._type;
	this->_hp = src._hp;
	return *this;
}

std::string const & Enemy::getType(void) const
{
	return this->_type;
}

int Enemy::getHP(void) const
{
	return this->_hp;
}

void Enemy::takeDamage(int x)
{
	if (x < 0)
		return;
	else if(this->_hp - x >= 0)
		this->_hp = this->_hp - x;
	else
		this->_hp = 0;
	return;
}
