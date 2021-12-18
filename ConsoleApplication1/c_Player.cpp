#include "c_Player.h"
#include <iostream>
c_Player::c_Player()
{
	this->health = 0;
	this->armor = 0;
	this->damage = 0;
}

c_Player::c_Player(int health, int armor, int damage)
{
	this->health = health;
	this->armor = armor;
	this->damage = damage;
}

void c_Player::takeDamage(int damage, const char* enemy)
{
	if (this->isAlive()) {
		if (this->armor > 0) {
			std::cout << "Your armor saved you from damage " << enemy << "\n";
			this->armor -= damage;
		}
		else {
			std::cout << "Your armor in bad condition. You losing health due to " <<enemy <<"\n";
			this->health -= damage;
		}
	}
	else {
		std::cout << "You die from hand " << enemy << "\n";
	}
}

void c_Player::giveDamage(c_Enemy target)
{
	if (target.isAlive()){
		std::cout << "You given damage to " << target.getName() << "\n";
		target.takeDamage(damage);
	}
	else {
		std::cout << target.getName() << " is dead\n";
	}
}
