#include <iostream>
#include <string>
using namespace std;

#include "Calendar.h"

//Constructor
Calendar::Calendar(string n)
{
	name = n;
	size = 0;
}

// //Destructor
Calendar::~Calendar()
{
}

//Get the number of events in the calendar
int Calendar::getNumEvents(){
 	return events.getSize();
}

//Add event to the calendar
void Calendar::add(Event *e)
{
	return events.add(e);
}

//Print calendar
void Calendar::print()
{
	cout <<"Number of Event(s) in Calendar: "<< this->getNumEvents() << endl;
	events.print();
}

//get events
List& Calendar::getEvents(){
	return events;
}