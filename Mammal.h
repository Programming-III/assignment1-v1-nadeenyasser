#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

//define mammal class here
class Mammal : public Animal {
private:
	string furColor;
public :
Mammal();
Mammal(string f);
string getfurColor();
 void setfurColor( string f);
 ~Mammal();
	
};





#endif
