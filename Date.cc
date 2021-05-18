#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Date.h"
#include "Time.h"

//Constructor
Date::Date(int d, int m, int y, int h, int min, int s)
{
  set(d, m, y, h, min, s);
}

//Deconstructor
Date::~Date()
{
}

//Set date details
void Date::set(int d,int m,int y, int h, int min, int s)
{
  year  = ( ( y > 0) ? y : 0 );
  month = ( ( m > 0 && m <= 12) ? m : 0 );
  day   = ( ( d > 0 && d <= lastDayInMonth() ) ? d : 0 );
  dateTime.set(h,min,s);
}

//Print date
void Date::printShort()
{
  cout<<setfill('0')<<setw(2)<<day<<"/"
      <<setfill('0')<<setw(2)<<month<<"/"
      <<setfill('0')<<setw(4)<<year<<endl;
}

void Date::printLong() 
{
  cout<<getMonthStr()<<" "<<day<<", "<<year<<" "<<endl;
  dateTime.print();
}

int Date::lastDayInMonth()
{
  switch(month)
  {
    case 2:
      if (leapYear())
        return 29;
      else
        return 28;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      return 31;
    default:
      return 30;
  }
}

//if leap year
bool Date::leapYear()
{
  if ( year%400 == 0 ||
       (year%4 == 0 && year%100 != 0) )
    return true;
  else
    return false;
}

//compare dates before or after
bool Date::lessThan(Date& d)
{
  if (year < d.year)
    return true;
  else if (year > d.year)
    return false;
  else if (month < d.month)
    return true;
  else if (month > d.month)
    return false;
  else if (day < d.day)
    return true;
  else if (day > d.day)
    return false;
  else 
    return dateTime.lessThan(d.dateTime);
}

//get string name of the month given the number month
string Date::getMonthStr() 
{
  string monthStrings[] = { 
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December" };

  if ( month >= 1 && month <= 12 )
    return monthStrings[month-1];
  else
    return "Unknown";
}

