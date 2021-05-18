#include <iostream>
#include <string>

using namespace std;

#include "SchoolEvent.h"

//Constructor
SchoolEvent::SchoolEvent(string n, int p, int d, int m, int y, int h, int min, int s)
	:Event(n,p,d,m,y,h,min,s)
{
	//cout<<"School Event ctor"<<endl;
}

//Destructor
SchoolEvent::~SchoolEvent(){
	//cout<<"SchoolEvent dtor"<<endl;
}

//Input:event
//Output:bool
//Purpose: compare event's dates
bool SchoolEvent::lessThan(Event* e){
	if(getDate().lessThan(e->getDate())){
		return true;
	}else{
		return false;
	}
}