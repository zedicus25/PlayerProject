#pragma once
#include <iostream>
class c_Enemy
{
private:
	int health;
	int damage;
	char* name;
public:
	c_Enemy();
	
	//gets
	inline int getHealth() const {
		return this->health;
	}
	inline int getDamage() const {
		return this->damage;
	}
	inline char* getName() const {
		return this->name;
	}
	//sets
	void setName(const char* name);

	void takeDamage(int damage);

	inline bool isAlive() const {
		return this->health > 0;
	}	

	friend std::ostream& operator << (std::ostream& out, const c_Enemy en);

	~c_Enemy()
	{
		this->name = nullptr;
	}
};

