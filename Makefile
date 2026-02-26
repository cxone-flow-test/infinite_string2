all: main.o infinite_str.o
	$(CXX) *.o -o main

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

CXX = g++
override CXXFLAGS += -g -Wall

.PHONY: clean
clean:
	rm -f *.o main

