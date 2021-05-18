#ifndef WORKEVENT_H
#define WORKEVENT_H

#include "Event.h"

class WorkEvent : public Event
{
  public:
    WorkEvent(string="Unknown",int=0, int=0, int=0, int=0, int=0, int=0, int=0);
    virtual ~WorkEvent();
    //use override to check if method was successfully overrided
    virtual bool lessThan(Event* e) override;

  protected:
};

#endif
