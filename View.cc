#include <sstream>
#include <iostream>
using namespace std;

#include "View.h"

//the main menu
void View::mainMenu(int& menuSelection) {
    string str;
    menuSelection = -1;
    cout << "MENU:" << endl;
    cout << "(1) Add event" << endl;
    cout << "(0) Exit" << endl;

    while (menuSelection < 0 || menuSelection > 1) {
        cout << "Enter selection:  "<<endl<<endl;
        cin >> menuSelection;
    }

    if (menuSelection == 0) { cout << endl; }
}

//read input from user
void View::readEvent(string& n, int& p, int& d, int& m, int& y, int& h, int& min, int& s){
    cout << "READING INPUT..." << endl << endl;
    cout << "Enter Event Name: "<<endl;
    cin >> n;
    cout << "Enter Event's Priority: "<<endl;
    cin >> p;
    cout << "Enter Day: "<<endl;
    cin >> d;
    cout << "Enter Month: "<<endl;
    cin >> m;
    cout << "Enter Year: "<<endl;
    cin >> y;
    cout << "Enter Hour: "<<endl;
    cin >> h;
    cout << "Enter Minute: "<<endl;
    cin >> min;
    cout << "Enter Second: "<<endl;
    cin >> s;
}

void View::readType(string& eventType){
    cout<<"What type of event is this? (Work/School)"<<endl;
    cin >> eventType;
}
//print calendar to view
void View::printCalendar(Calendar& cal) {
    cout << "PRINTING..." << endl;
    cal.print();
}
