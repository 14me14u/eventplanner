#ifndef CONTROL_H
#define CONTROL_H

#include "View.h"
#include "Calendar.h"
#include "Event.h"
#include "WorkEvent.h"
#include "SchoolEvent.h"

class Control{

    public:
        Control();
        ~Control();
        void launch();
    private:
        Calendar schoolCalendar;
        Calendar workCalendar;
        View view;
};

#endif