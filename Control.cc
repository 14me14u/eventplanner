#include "Control.h"
#include <iostream>

Control::Control(){
}

Control::~Control()
{
}
//Launch
void Control::launch(){
	int menuSelection;
	int priority, day, month, year, hour, min, sec;	
	string name, type;
	SchoolEvent* newSchoolEvent;
	WorkEvent* newWorkEvent;


//Control menu selections
	while(1){
		menuSelection = -1;
		view.mainMenu(menuSelection);
		//while the user keeps inputting 1 to add an event
		if(menuSelection == 1){
			view.readType(type);
			view.readEvent(name, priority, day, month, year, hour, min, sec);
			//create new event by type using dynamically allocated memory
			//get type of event and add new event to seperate calendars
			if(type =="School"||type=="school"){
				newSchoolEvent = new SchoolEvent(name, priority, day, month, year, hour, min, sec);
				schoolCalendar.add(newSchoolEvent);	
			}else if(type =="Work"||type =="work"){
				newWorkEvent = new WorkEvent(name, priority, day, month, year, hour, min, sec);
				workCalendar.add(newWorkEvent);
			}
		}else{

			break;
		}
	}

	//Print calendar
	cout<<"SCHOOL CALENDAR ";
	view.printCalendar(schoolCalendar);
	cout<<endl;
	cout<<"WORK CALENDAR ";
	view.printCalendar(workCalendar);
}