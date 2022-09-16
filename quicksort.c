#include <stdio.h>  /* printf */
#include <stdlib.h> /* qsort */
int cmp_shortint(const void *va, const void *vb) {
  short int a = *((short int const *)va);
  short int b = *((short int const *)vb);
  if (a < b)
    return -1;
  else if (a == b)
    return 0;
  else
    return 1;
}

// Polymorphic function qsort
void qsort(void *base, size_t nmemb, size_t size,
           int (*compare)(const void *, const void *));

int cmp_dbl(const void *va, const void *vb) {
  double a = *((double const *)va);
  double b = *((double const *)vb);
  if (a < b)
    return -1;
  else if (a == b)
    return 0;
  else
    return 1;
}

int n;
double dvalues[] = {888888999999999.0, 99999.0,       199.0,
                    329999.0,          -3999999999.0, -3999999999.0};

void print_dbl(const double *array) {
  for (n = 0; n < 6; n++)
    printf("%f ", dvalues[n]);
  printf("\n");
}

int main() {
  qsort(dvalues, 6, sizeof(double), cmp_dbl);
  // -3999999999.0 -3999999999.0 199.0 99999.0 329999.0 888888999999999.0
  qsort(dvalues, 6, sizeof(double), cmp_shortint);
  // 888888999999999.0 -3999999999.0 -3999999999.0 199.0 99999.0 329999.0
  return 0;
}
