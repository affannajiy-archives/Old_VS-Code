#include <iostream>
using namespace std;

int main(){
  int start, end;
  cout << "Enter start number: ";
  cin >> start;
  cout << "Enter end number: ";
  cin >> end;

  for (int z = start; z <= end; z++){
    cout << "Multiplication Table for " << z << ":" << endl;
    for (int y = 1; y <= 10; y++){
      cout << z << " x " << y << " = " << (z * y) << endl;
    }
    cout << endl;
  }
  return 0;
}