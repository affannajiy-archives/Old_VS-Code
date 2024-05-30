#include <iostream>
using namespace std;

const int PRIME_NUM = 11; //global

int main()
{
  const int SECRET = 17; //local
  int num, mysteryNum;
  cout << "\nEnter a positive integer less than 1000: ";
  cin >> num;

  mysteryNum = num * PRIME_NUM - 3 * SECRET;
  cout << "Mystery number: " << mysteryNum << endl;
  return 0;
}