#include <iostream>
using namespace std;

int main(){
  int duration;
  double cost = 0;

  cout << "Enter the duration of the call (in minute): ";
  cin >> duration;

  if (duration <= 3)
    cost = duration * 0.05;
  else if (duration <= 10)
    cost = 3 * 0.05 + (duration - 3) * 0.08;
  else
    cost = 3 * 0.05 + 7 * 0.08 + (duration - 10) * 0.10;
  
  cout<< "The cost of the call is: $ " << cost << endl;
  

  return 0;
}