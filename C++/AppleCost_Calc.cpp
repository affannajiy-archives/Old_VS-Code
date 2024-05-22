#include <iostream>
using namespace std;
int main()
{
  int mass;
  float cost;
  cout << "Apples (RM10/kg)" << endl;
  cout << "Mass of Apples(kg): ";
  cin >> mass;

  //Calc
  cost = mass * 10;
  cout << "Cost of Apples: RM" << cost << endl;

  return 0;
}