#ifndef EVENT_H
#define EVENT_H

#include <string>
using namespace std;

#include "Date.h"
#include "Time.h"

class Event
{
  public:
    Event(string="Unknown",int=0, int=0, int=0, int=0, int=0, int=0, int=0);
    virtual ~Event();
    void set(string, int, int, int, int, int, int, int);
    void print();
    Date& getDate();
    int& getPriority();
    virtual bool lessThan(Event*) = 0;
    

  protected:
    string name;
    int priority;
    Date eventDate;
};

#endif