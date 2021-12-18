#pragma once
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
		return health > 0;
	}	

	~c_Enemy()
	{
		this->name = nullptr;
	}
};

