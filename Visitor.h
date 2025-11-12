#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

//define visitor class here
	private :
	string visitorname;
	int ticketsbought;
	public :
		Vistor();
		Vistor(string v, int t);
		void displayinfo();
		~Vistor();

};







#endif
