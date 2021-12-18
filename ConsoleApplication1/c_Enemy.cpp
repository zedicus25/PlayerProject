#include "c_Enemy.h"
#include <iostream>
c_Enemy::c_Enemy()
{
	this->health = 10 + rand() % 25;
	this->damage = 5 + rand() % 10;
	this->name = new char[0];
}

void c_Enemy::setName(const char* name)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}

void c_Enemy::takeDamage(int damage)
{
	if (this->isAlive()) {
		this->health -= damage;
	}
}
