//Complete the C++ code to include a function to calculate the sum of all elements in a 2D array

#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

// Function to calculate the sum of all elements in a 2D array
// **A**

int sumArray(int myArray[ROWS][COLS]){
  int sum = 0;
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      sum = sum + myArray[i][j];
    }
  }
  return sum;
}

int main() {
    int myArray[ROWS][COLS] = {
        {1000, 2234, 3765},
        {4887, 5111, 6972},
        {7843, 8990, 9122}
    };

    int totalSum = sumArray(myArray);
    cout << "Sum of all array elements: " << totalSum << endl;

    return 0;
}