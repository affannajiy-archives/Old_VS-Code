#include <iostream>
using namespace std;
int main()
{
  float n1, n2, n3, sum;
  cout << "Enter the 1st number: ";
  cin >> n1;
  cout << "Enter the 2nd number: ";
  cin >> n2;
  cout << "Enter the 3rd number: ";
  cin >> n3;

  sum = n1 + n2 + n3;
  cout << "The sum of the 3 numbers = " << sum;
  return 0;
}