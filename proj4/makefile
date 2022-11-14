CXX = g++
CXXFLAGS = -Wall -g

proj4: proj4.cpp Entity.o Game.o Area.o
	$(CXX) $(CXXFLAGS) Entity.o Game.o Area.o Terran.o Zerg.o Marine.o Ghost.o Battlecruiser.o Zergling.o Mutalisk.o Hydralisk.o proj4.cpp -o proj4 

Game.o: Game.cpp Game.h Entity.o Area.o
	$(CXX) $(CXXFLAGS) -c Game.cpp 

Entity.o: Entity.h Entity.cpp Terran.o Zerg.o 
	$(CXX) $(CXXFLAGS) -c Entity.cpp

Terran.o: Terran.cpp  Terran.h Marine.o Ghost.o Battlecruiser.o
	$(CXX) $(CXXFLAGS) -c Terran.cpp

Zerg.o: Zerg.h Zerg.cpp Zergling.o Mutalisk.o Hydralisk.o
	$(CXX) $(CXXFLAGS) -c Zerg.cpp

Marine.o: Marine.cpp Marine.h
	$(CXX) $(CXXFLAGS) -c Marine.cpp

Ghost.o: Ghost.cpp Ghost.h
	$(CXX) $(CXXFLAGS) -c Ghost.cpp

Battlecruiser.o: Battlecruiser.cpp Battlecruiser.h
	$(CXX) $(CXXFLAGS) -c Battlecruiser.cpp

Zergling.o: Zergling.cpp Zergling.h
	$(CXX) $(CXXFLAGS) -c Zergling.cpp

Mutalisk.o: Mutalisk.cpp Mutalisk.h
	$(CXX) $(CXXFLAGS) -c Mutalisk.cpp

Hydralisk.o: Hydralisk.cpp Hydralisk.h
	$(CXX) $(CXXFLAGS) -c Hydralisk.cpp

Area.o: Area.cpp Area.h
	$(CXX) $(CXXFLAGS) -c Area.cpp

run:
	./proj4

run1:
	./proj4 proj4_map1.txt
		
val1:
	valgrind ./proj4 proj4_map1.txt

clean:
	rm *~
	rm *.o
