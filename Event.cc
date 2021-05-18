#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Event.h"

//Constructor
Event::Event(string n, int p, int d, int m, int y, int h, int min, int s)
{
	set(n, p, d, m, y, h, min, s);
}

Event::~Event()
{
}
//Deconstructor
void Event::set(string n, int p, int d,int m,int y, int h, int min, int s)
{
	name  = n;
	priority = p;
	eventDate.set(d,m,y,h,min,s);
}

//Print event details
void Event::print()
{
	cout <<"Event: "<< name <<endl<< "Priority: "<<priority << endl;
	eventDate.printLong();
}

//Get date
Date& Event::getDate()
{
	return eventDate;
}
//Get priority
int& Event::getPriority(){
	return priority;
}