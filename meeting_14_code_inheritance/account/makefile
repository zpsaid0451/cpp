CXX = g++
CXXFLAGS = -Wall

accounts: Account.cpp Savings.o Checking.o driver.cpp
	$(CXX) $(CXXFLAGS) Account.cpp Savings.o Checking.o driver.cpp -o accounts

Savings.o: Savings.cpp Account.cpp
	$(CXX) $(CXXFLAGS) -c Savings.cpp

Checking.o: Checking.cpp Account.cpp
	$(CXX) $(CXXFLAGS) -c Checking.cpp

run:
	./accounts
