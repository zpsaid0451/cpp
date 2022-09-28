CXX = g++
CXXFLAGS = -Wall

file1: DayOfYear.o driver.cpp
	$(CXX) $(CXXFLAGS) DayOfYear.o driver.cpp -o file1

DayOfYear.o: DayOfYear.cpp DayOfYear.h
	$(CXX) $(CXXFLAGS) -c DayOfYear.cpp

clean:
	rm *.o*
	rm *~ 

run:
	./file1
