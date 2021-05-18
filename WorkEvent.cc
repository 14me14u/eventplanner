#include <iostream>
#include <string>

using namespace std;

#include "WorkEvent.h"

//Constructor
WorkEvent::WorkEvent(string n, int p, int d, int m, int y, int h, int min, int s)
	:Event(n,p,d,m,y,h,min,s)
{
	//cout<<"Work Event ctor"<<endl;
}

//Destructor
WorkEvent::~WorkEvent(){
	//cout<<"WorkEvent dtor"<<endl;
}

//Input:event
//Output:bool
//Purpose: compare event's priority
bool WorkEvent::lessThan(Event* e){
	if(priority < e->getPriority()){
		return true;
	}else{
		return false;
	}
}
