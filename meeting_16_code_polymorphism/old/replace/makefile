XX = g++
CXXFLAGS = -Wall

student1: Person.o Student.o driver.cpp
	$(CXX) $(CXXFLAGS) Person.o Student.o driver.cpp -o student1

Student.o: Person.o Student.cpp
	$(CXX) $(CXXFLAGS) -c Student.cpp

Person.o: Person.cpp
	$(CXX) $(CXXFLAGS) -c Person.cpp

clean:
	rm *.o*
	rm *~ 

run:
	./student1
