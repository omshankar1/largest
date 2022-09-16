CXX := clang++
CXXFLAGS := -std=c++20

all: largest largest_concept

largest: largest.cpp
	$(CXX) $(CXXFLAGS) largest.cpp -o ./bin/largest

largest_concept: largest_concept.cpp
	$(CXX) $(CXXFLAGS) largest_concept.cpp -o ./bin/largest_concept  

clean:
	rm *.o ./bin/largest ./bin/largest_concept
