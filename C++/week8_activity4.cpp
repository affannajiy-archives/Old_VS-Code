#include <iostream>
using namespace std;

int main(){
  int numbers[10];

  //Input
  for (int i = 0; i < 10; i++){
    cout << "Enter a number: ";
    cin >> numbers[i];
  }
  
  //Print All Number in Array
  for (int i = 0; i < 10; i++){
    cout << numbers[i] << " ";
  }
  cout << endl;

  //Print Odd Numbers
  for (int i = 0; i < 10; i++){
    if (numbers[i] % 2 != 0){ //Check if Odd
      cout << numbers[i] << " ";
    }
  }
  cout << endl;

  //Print at Even Indices of the Array
  for (int i = 0; i < 10; i++){
    if (i % 2 == 0){
      cout << numbers[i] << " ";
    }
  }
  cout << endl;

  return 0;
}