#include <iostream>

using namespace std;

/**
 * Create a function that takes a pointer to a float and a float, then it should
 * multiply the value of the pointer with the given float and save the result
 * where the pointer points.
 * Please mutliply the total variable by 5 with it.
 */
void multipl(float* total, float input) {
  float temp = *total;
  temp = input * temp;
  *total = temp;
}

void multipl_secondver(float&total, float input) {
  total = input * total;
}

int main() {
  float total = 123;
  float input = 5;
  //multipl(&total, input);
  multipl_secondver(total, input);
  cout << total;

  return 0;
}

