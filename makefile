output: menu

menu: hostname.o memory.o operatingsystem.o processor.o network.o networklist.o processes.o processeslist.o menuutil.o
	g++ hostname.o memory.o operatingsystem.o processor.o network.o networklist.o processes.o processeslist.o menuutil.o -o menu

menuutil.o: menuutil.cpp
	g++ -c menuutil.cpp

processeslist.o: processeslist.cpp processeslist.h
	g++ -c processeslist.cpp

processes.o: processes.cpp processes.h
	g++ -c processes.cpp

networklist.o: networklist.cpp networklist.h
	g++ -c networklist.cpp

network.o: network.cpp network.h
	g++ -c network.cpp

processor.o: processor.cpp processor.h
	g++ -c processor.cpp

operatingsystem.o: operatingsystem.cpp operatingsystem.h
	g++ -c operatingsystem.cpp

memory.o: memory.cpp memory.h
	g++ -c memory.cpp

hostname.o: hostname.cpp hostname.h
	g++ -c hostname.cpp

clean:
	rm -rf *o done
