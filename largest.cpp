#include <iostream>
#include <type_traits>
#include <vector>

// make all && ./bin/largest
template <typename T> T largest(std::vector<T> v) {
  auto largest = v[0];
  for (auto i = 0; i < v.size(); i++) {
    if (largest < v[i]) {
      largest = v[i];
    }
  }
  return largest;
}

int main() {
  std::vector<int> vint{8, 7, 4, 3, 5, 6, 1, 2};
  std::vector vint2{8, 7, 4, 3, 5, 6, 1, 2};
  std::vector vfloat{8.1f, 7.0f, 4.0f, 3.0f, 5.0f, 6.0f, 1.0f, 2.0f};
  std::vector<double> vdouble{8.11111111222, 7.0, 4.0, 3.0, 5.0, 6.0, 1.0, 2.0};
  std::vector<std::string> vstr{"abc", "def", "ghi", "jkl"};
  std::vector<const char *> vcharptr{"abc", "def", "ghi", "jkl"};

  std::cout << largest(vint) << std::endl;
  std::cout << largest(vfloat) << std::endl;
  std::cout << largest(vdouble) << std::endl;
  std::cout << largest(vstr) << std::endl;
  std::cout << largest(vcharptr) << std::endl;

  return 0;
}
