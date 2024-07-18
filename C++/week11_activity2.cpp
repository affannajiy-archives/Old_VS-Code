#include <iostream>
#include <iomanip> //input output manipulation
using namespace std;

int main(){
  int number = 5;
  double pi = 3.142;
  
  cout << setw(10) << number << endl;
  cout << setw(10) << setfill('%') << number << endl; //10 spaces but 9% with 1 space for 5
  //must write smth to print
  cout << fixed << showpoint << setprecision(2) << pi << endl;
  return 0;
}