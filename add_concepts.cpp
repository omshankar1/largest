#include <concepts>
#include <iostream>
#include <type_traits>

template <typename T>
concept Number = std::integral<T> or std::floating_point<T>;

// auto add(Number auto a, Number auto b) { return a + b; }
template <Number T> T add(T a, T b) { return a + b; }

int main(int argc, char *argv[]) {

  std::cout << add(3, 4) << std::endl;
  std::cout << add(3.0, 4.0) << std::endl;
  // std::cout << add(30, 4.0) << std::endl;
  // std::cout << add(std::string{"a"}, std::string{"b"}) << std::endl;
  // std::cout << add("a", "b") << std::endl; // char const *
  return 0;
}
// Specializations:
// template <typename T> T add(T a, T b) { return a + b; }
// template <> char const *add(char const *a, char const *b) {}   //
// template <> std::string add(std::string &a, std::string &b)
// {} // Specialization 2
