#include <iostream>
using namespace std;
int main()
{
  float miles;
  float kilo;
  cout << "Distance (miles): ";
  cin >> miles;
  kilo = miles * 1.60934;
  cout << "Distance (km): " << kilo;
  
  return 0;
}