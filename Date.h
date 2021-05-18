#ifndef DATE_H
#define DATE_H
#include "Time.h"

#include <string>
using namespace std;

class Date
{
  public:
    Date(int=0, int=0, int=2000, int=0, int=0, int=0);
    ~Date();
    void set(int, int, int, int, int, int);
    void printShort();
    void printLong();
    bool lessThan(Date&);

  private:
    int day;
    int month;
    int year;
    Time dateTime;
    int  lastDayInMonth();
    bool leapYear();
    string getMonthStr();
};

#endif