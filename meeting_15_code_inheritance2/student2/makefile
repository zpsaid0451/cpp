CXX = g++
CXXFLAGS = -Wall

student1: Person.o Student.o Class1.o driver.cpp
	$(CXX) $(CXXFLAGS) Person.o Student.o Class1.o driver.cpp -o student1

Class1.o: Class1.cpp Student.cpp Person.cpp
	$(CXX) $(CXXFLAGS) -c Class1.cpp

Student.o: Person.o Student.cpp
	$(CXX) $(CXXFLAGS) -c Student.cpp

Person.o: Person.cpp
	$(CXX) $(CXXFLAGS) -c Person.cpp

clean:
	rm *.o*
	rm *~ 

run:
	./student1
