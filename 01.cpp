#include <iostream>

using namespace std;

/**
 * Create a function that decides if there is a bigger or equal number than a given number in an array
 * It should take the array, it's length and a number as a parameter, then return a boolean
 */

bool bigger_or_eq(int* array, int input, int length) {
  for(int i = 0; i < length; i++) {
    if(input <= array[i]) {
      return true;
      break;
    }
  }
  return false;
}

int main() {
  int array[] = {3, 2, 4, 6, -1};
  int length = sizeof(array) / sizeof(int);
  int inputnum = 7;
  bigger_or_eq(array, inputnum, length) == true ? cout << "There is bigger or equal number in the array" : cout << "There is >>NOT<< bigger or equal number in the array";
  return 0;
}

