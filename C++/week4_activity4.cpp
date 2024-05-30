#include <iostream>
using namespace std;
int main()
{
  float n1, n2, sum, diff, prod;
  cout << "Enter 2 numbers:";
  cin >> n1 >> n2;

  sum = n1 + n2;
  diff = n1 - n2;
  prod = n1 * n2;
  cout << "The sum of the 2 numbers= " << sum << endl;
  cout << "The difference of the 2 numbers= " << diff << endl;
  cout << "The product of the 2 numbers= " << prod << endl;
  return 0;
}