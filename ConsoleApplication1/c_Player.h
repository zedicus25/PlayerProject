#pragma once
#include "c_Enemy.h"
class c_Player
{
private:
	int health;
	int armor;
	int damage;
public:
	c_Player();
	c_Player(int health, int armor, int damage);

	//gets
	inline int getHealth() const {
		return this->health;
	}
	inline int getArmor() const {
		return this->armor;
	}
	inline int getDamage() const {
		return this->damage;
	}

	void takeDamage(int damage, const char* enemy);
	void giveDamage(c_Enemy target);

	inline bool isAlive() const{
		return health > 0;
	}
};

