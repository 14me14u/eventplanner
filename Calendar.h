#ifndef CALENDAR_H
#define CALENDAR_H

#include "Event.h"
#include "List.h"

class Calendar
{
  public:
    Calendar(string="Unknown");
    ~Calendar();
    void add(Event*);
    int getNumEvents();
    void print();
    List& getEvents();
  private:
    string name;
    int size;
    List events;
};

#endif
