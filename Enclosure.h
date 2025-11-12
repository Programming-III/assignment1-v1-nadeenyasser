#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

//define enclosure class here 



class Enclosure {
	private :
	   string Animal* animal ;
	  int capacity;
	  int currentcount;
	public: 
		Enclosure();
		Enclosure(string Animal a, int c, int cc);
	int getcapacity();
	int getcount();
	void setcapacity( int c);
	void setcount(int cc);
	~Enclosure();

	void addAnimal(Animal*a);
	void displayAnimals();


};








#endif
