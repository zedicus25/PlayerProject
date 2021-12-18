#include "c_Enemy.h"
#include <iostream>
c_Enemy::c_Enemy()
{
	this->health = 10 + rand() % 25;
	this->damage = 5 + rand() % 10;
	this->name = new char[9];
	strcpy_s(this->name, 9, "Default");
}

void c_Enemy::setName(const char* name)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}

void c_Enemy::takeDamage(int damage)
{
	
		this->health -= damage;
	
}

std::ostream& operator<<(std::ostream& out, const c_Enemy en)
{
	out << "Enemy name " << en.getName() << "\n";
	out << "Enemy health " << en.getHealth() << "\n";
	out << "Enemy damage " << en.getDamage() << "\n";
	return out;
}
