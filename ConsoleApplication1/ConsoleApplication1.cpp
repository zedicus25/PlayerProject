#include <iostream>
#include "c_Player.h"
using namespace std;
int main()
{
	srand(time(NULL));
	c_Player player(28,15,7);
	c_Enemy enemy;
	enemy.setName("Goblin");
	int ui=-1;
	do
	{
		system("cls");
		cout << "1 - Attack enemy\n";
		cout << "2 - Try find heal\n";
		cout << "3 - Try find armor\n";
		cin >> ui;
		switch (ui)
		{
		case 1:
		{
			system("cls");
			int v = 1 + rand() % 9;
			if (v <= 5) {
				player.giveDamage(enemy);
				cout << player;
				cout << endl;
				cout << enemy;
			}
			else {
				player.takeDamage(enemy.getDamage(), "Goblin");
				cout << player;
				cout << endl;
				cout << enemy;
			}
			system("pause");
			break;
		}
		case 2:
			system("cls");
			player.heal();
			system("pause");
			break;
		case 3:
			system("cls");
			player.restoreArmor();
			system("pause");
			break;
		case 0:
			break;
		default:
			cout << "Incorrect input\n";
			break;
		}
	} while (ui != 0);
}
