#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Time.h"

//Constructor
Time::Time(int h, int m, int s)
{
  set(h, m, s);
}

//Destructor
Time::~Time()
{
}

//Setter
void Time::set(int h,int m,int s)
{
  hours   = ( h >= 0 && h < 24) ? h : 0;
  minutes = ( m >= 0 && m < 60) ? m : 0;
  seconds = ( s >= 0 && s < 60) ? s : 0;
}

//compare seconds
bool Time::lessThan(Time& t)
{
  return convertToSecs() < t.convertToSecs();
}

//convert seconds to minutes
int Time::convertToSecs()
{
  return (hours*3600 + minutes*60 + seconds);

}

//print
void Time::print()
{
  cout<<setfill('0')<<setw(2)<<hours<<":"
      <<setfill('0')<<setw(2)<<minutes<<":"
      <<setfill('0')<<setw(2)<<seconds<<endl;
}

