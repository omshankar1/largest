CXX := clang++
CXXFLAGS := -std=c++20

all: largest

largest: largest.cpp
	$(CXX) $(CXXFLAGS) largest.cpp -o ./bin/largest

clean:
	rm *.o ./bin/largest ./bin/largest
