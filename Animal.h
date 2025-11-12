#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;
private :
	string name;
	int age;
	bool isHungry;
public :
	Animal();
	Animal(string n, int a, bool h);
	string getname();
	int getage();
	bool gethungry();
	void setname(string n);
	void setage(int a);
	void sethungry(bool h);
	void display();
	void feed();
	~Animal();

//define animal class here 



#endif
