#include <iostream>

using namespace std;

/**
 * Create a function that takes an integer and returns how many divisors it has
 */
int divisor_quantity(int input) {
  int counter = 0;
  for(int i = 1; i <= input; i++) {
    if(input % i == 0) {
      counter++;
    }
  }
  return counter;
}

int main() {
  int input = 12;
  cout << divisor_quantity(input);

  return 0;
}

