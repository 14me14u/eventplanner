#ifndef SCHOOLEVENT_H
#define SCHOOLEVENT_H

#include "Event.h"

class SchoolEvent : public Event
{
  public:
    SchoolEvent(string="Unknown",int=0, int=0, int=0, int=0, int=0, int=0, int=0);
    virtual~SchoolEvent();
    //use override to check if method was successfully overrided
    virtual bool lessThan(Event* e) override;

  protected:
};

#endif
