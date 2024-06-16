#include <iostream>
using namespace std;

int main(){
  int popA, popB, year = 0;
  float rateA, rateB;
  
  //Town A Input
  cout << "**TOWN A**" << endl;
  cout << "Enter Number of Population Town A: ";
  cin >> popA;
  cout << "Enter the Growth Rate Town A (%): ";
  cin >> rateA;
  
  //Town B Input
  cout << "\n**TOWN B**" << endl;
  cout << "Enter Number of Population Town B: ";
  cin >> popB;
  cout << "Enter the Growth Rate Town B (%): ";
  cin >> rateB;

  //Loop for Year Calc
  while (popA <= popB){
    popA += (popA * rateA / 100);
    popB += (popB * rateB / 100);
    year++; //Increment Year =+ 1
  }
  
  //Output
  cout << "\n**RESULTS**" << endl;
  cout << "Years Taken for Town A to surpass Town B: " << year <<endl;
  cout << "Population of Town A after " << year << " years: " << popA <<endl;
  cout << "Population of Town B after " << year << " years: " << popB <<endl;

  return 0;
}