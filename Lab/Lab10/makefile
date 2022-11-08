CXX = g++
CXXFLAGS = -Wall

lab10: Landmass.o Continent.o Island.o lab10.cpp
		$(CXX) $(CXXFLAGS) Landmass.o Continent.o Island.o lab10.cpp -o lab10

Landmass.o: Landmass.h Landmass.cpp
		$(CXX) $(CXXFLAGS) -c Landmass.cpp -o Landmass.o

Continent.o: Continent.h Continent.cpp Landmass.o
		$(CXX) $(CXXFLAGS) -c Continent.cpp -o Continent.o

Island.o: Island.h Island.cpp Landmass.o
		$(CXX) $(CXXFLAGS) -c Island.cpp -o Island.o

run:
		./lab10

clean:
		rm *~
