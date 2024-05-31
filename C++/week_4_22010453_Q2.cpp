//W4_Lab 'Affan 22010453
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int carton;
  float milk, cost, profit;
  cout << "Enter total amount of milk produced in the morning (litres): ";
  cin >> milk;
  cout << endl;

  carton = round(milk / 3.78);
  cost = milk * 0.38;
  profit = carton * 0.27;

  cout << "Number of milk carton(s): " << carton << endl;
  cout << "Cost of producing milk: " << cost << endl;
  cout << "Profit from producing milk: " << profit << endl;
  return 0;
}