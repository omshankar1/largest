#include <concepts>
#include <iostream>
#include <vector>

//  make all && ./bin/largest_concept
template <std::totally_ordered T> T largest(std::vector<T> v) {
  auto largest = v[0];
  for (auto i = 0; i < v.size(); i++) {
    if (largest < v[i]) {
      largest = v[i];
    }
  }
  return largest;
}

using namespace std;

// Define a class with x, y class members and find Max in a set of classes
class A {
  friend ostream &operator<<(ostream &os, const A &a);

public:
  int x;
  int y;
  A(int x, int y) : x(x), y(y) {}
  // auto operator<=>(const A &rhs) const = default;
};

ostream &operator<<(ostream &os, const A &a) {
  std::cout << "(" << a.x << ',' << a.y << ")"
            << " ";
  return os;
}

int main() {
  std::vector<A> vstructs{A{5, 3}, A{3, 21}, A{5, 9}};
  // largest.cpp:29:3: note: candidate template ignored: constraints not
  // satisfied [with T = A] T largest(std::vector<T> v) requires Ordering<T> {
  auto max = largest(vstructs);
  std::cout << "Maximum is:" << max << "-> ";
  for (auto s : vstructs) {
    std::cout << s;
  }
  std::cout << std::endl;
}
