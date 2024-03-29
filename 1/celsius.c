#include <stdio.h>
#define LOWER -10
#define UPPER 10

float celsius_to_fahr(float celsius);
/* Print Celsius to Fahrengeit table from -10C to 10C */
int main() {
  float fahr;
  for (int celsius = LOWER; celsius <= UPPER; ++celsius) {
    fahr = (9.0/5.0) * celsius + 32;
    printf("%3d\t%3.1f\n", celsius, fahr);
  }
  return 0;
}

float celsius_to_fahr(float celsius) {
  return (9.0/5.0) * celsius + 32;
}
