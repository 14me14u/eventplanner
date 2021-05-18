#ifndef VIEW_H
#define VIEW_H

#include "Calendar.h"

class View {

    public:
        void mainMenu(int&);
        void readEvent(string&, int&, int&, int&, int&, int&, int&, int&);
        void printCalendar(Calendar&);
        void readType(string&);

    private:
};

#endif
