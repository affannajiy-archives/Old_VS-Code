#include <iostream>
using namespace std;

int main(){
  int i, j;
  cout << "Enter start number: ";
  cin >> i;
  cout << "Enter end number: ";
  cin >> j;

  for (int z = i; z <= j; z++){
    cout << "Multiplication Table for " << z << ":" << endl;
    for (int y = 1; y <= 10; y++){
      cout << z << " x " << y << " = " << (z * y) << endl;
    }
    cout << endl;
  }

  return 0;
}