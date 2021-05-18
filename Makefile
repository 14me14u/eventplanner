OPT = -Wall

cal:	main.o Date.o Time.o Event.o Calendar.o SchoolEvent.o WorkEvent.o List.o View.o Control.o
	g++ $(OPT) -o cal main.o Date.o Time.o Event.o Calendar.o SchoolEvent.o WorkEvent.o List.o View.o Control.o

main.o:	main.cc Date.h
	g++ $(OPT) -c main.cc

Date.o:	Date.cc Date.h
	g++ $(OPT) -c Date.cc

Time.o:	Time.cc Time.h
	g++ $(OPT) -c Time.cc

Event.o: Event.cc Event.h
	g++ $(OPT) -c Event.cc

Calendar.o: Calendar.cc Calendar.h
	g++ $(OPT) -c Calendar.cc

SchoolEvent.o:	SchoolEvent.cc SchoolEvent.h Event.h
	g++ -c SchoolEvent.cc

WorkEvent.o:	WorkEvent.cc WorkEvent.h Event.h
	g++ -c WorkEvent.cc

List.o: List.cc List.h
	g++ $(OPT) -c List.cc

View.o: View.cc View.h Calendar.h Event.h
	g++ $(OPT) -c View.cc

Control.o: Control.cc Control.h View.h Calendar.h
	g++ $(OPT) -c Control.cc

clean:
	rm -f *.o cal
