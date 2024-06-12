#include <iostream>
#include <cmath>
using namespace std;

int main(){
  float num1, num2, result;
  char operation;
  //Greeting
  cout << "!!Welcome!!\n";
  cout << "'Affan 22010453\n";
  cout << "Simple Calculator\n";
  cout << endl;

  //Prompt User Input
  cout << "Enter First Number: ";
  cin >> num1;
  cout << "Enter Operation (+,-,*,/,%): ";
  cin >> operation;
  cout << "Enter Second Number: ";
  cin >> num2;

  //Choose Operations
  switch (operation){
  case '+':
    result = num1 + num2;
    break;
  case '-':
    result = num1 - num2;
    break;
  case '*':
    result = num1 * num2;
    break;
  case '/':
    if (num2 == 0){ //If divide by 0 Error
      cout << "Error: Unable to Divide by Zero" << endl;
      return 1;
    } else {
      result = num1 / num2;
    }
    break;
  case '%':
    if (num2 == 0){ //If divide by 0 Error
      cout << "Error: Unable to Divide by Zero!" << endl;
      return 1;
    } else {
      result = fmod(num1, num2); //fmod computes remainder of division
    }
    break;
  default: //Invalid Input
    cout << "Error: Invalid Operation!" << endl;
    return 1;
    break;
  }

  //Output
  cout << "\nResult:" << endl;
  cout << num1 << " " << operation << " " << num2 << " = " << result << endl;
  return 0;
}