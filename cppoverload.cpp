
double add(double a, double b) { return a + b; }
float add(float a, float b) { return a + b; }
int add(int a, int b) { return a + b; }

int main() {
  add(42, 55);       // add(int, int)
  add(42.2f, 55.2f); // add(float, float)
  add(42.2, 55.2);   // add(double, double)
}
