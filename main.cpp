#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;



// ============== MAIN FUNCTION ==============
Animal :: Animal(){
	name="";
	age=0;
}
Animal ::Animal(string n, int a, bool h) {
	name=n;
	age=a;
	isHungry=h;

}
string Animal:: getname() {
	return name;
}
int Animal:: getage() {
	 return age;
}
bool Animal:: gethungry() {
	return isHungry;
}
void Animal:: setname(string n) {
	name=n;
}
void Animal::setage(int a) {
	age=a;
}
void Animal::sethungry(bool h) {
	isHungry=h;
}
void Animal::display() {
	cout << "name:" << name << endl;
	cout << "age:" << age << endl;
	cout << "is Hungry:" << isHungry << endl;
}
void  Animal::feed() {
	if (isHungry=true);
}
Animal :: ~Animal(){}
 string Mammal::getfurColor() {
 return furColor;
}
 void Mammal ::setfurColor(string f) {
	 furColor=f;
 }
 Mammal ::Mammal() {
	 furColor="";
 }
 Mammal ::Mammal(string f) {
 furColor=f;

 }
 Mammal::Mammal(){}
 Bird ::Bird() {
	 wingSpan=0.0;
 }
 Bird:: Bird(float w) {
 wingSpan=w;

 }

 float Bird :: getwing() {
	 return wingSpan;
 }
 void Bird::setwing(float w) {
 wingSpan=w;

 }
 Bird ::~Bird(){}
 Reptile ::Reptile() {
 isVenomous="";

 }
 Reptile::Reptile(bool v) {
	 isVenomous=v;
 }
Reptile::~Reptile(){}
 bool Reptile::getv() {
 return isVenomous;

 }
 void Reptile::setv(bool v) {
	 isVenomous=v;
 }
 Enclosure::Enclosure() {
	 capacity=0;
	 currentcount=0;
 }
 Enclosure::Enclosurestring Animal a, int c, int cc) {
 Animal=a;
	 capacity=c;
	 currentcount=cc;


 }
 
 
 ~Enclosure(){
 desturct animal[currentCount];
 }

 void Enclosure:: addAnimal(Animal* a)
	 if (currentCount < capacity) {
		 Animal[currentCount]=a;
		 currentCount++
 }
 void Enclosure::displayAnimals() {
	 for (int i = 0, i < currentCount, i++) {
		 return animal[i];
	 }
 }
 Enclosure::~Enclosure() {
	 destruct animal[currentcount];
 }
 Vistor::Vistor() {
	 visitorname="";
	 ticketsbought=0;

 }
 Vistor::Vistor(string v, int t) {
  visitornanme=v;
  ticketsbought=t;

 }
 voidVistor::displayinfo() {
	 cout<< "name"<< visitorname<<endl;
	 cout << "tickets bought "<<endl;
 }
 Vistor :: ~Vistor(){}


int main()
{
	Enclosure e (10,11);
e.Addanimal(new mammal(5,hungry), new Bird(2, not hungry), new Reptile(3, venmous, hungry);
Visitor v( sarah ali,3);
e.displayAnimals();
v.displayinfo();
    std::cout << "Hello World!\n";
}
