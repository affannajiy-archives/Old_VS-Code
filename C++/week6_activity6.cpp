#include <iostream>
using namespace std;

int main(){
  int a, b, c;
  cout << "Enter a & b: ";
  cin >> a >> b;

  while (a < b){
    cout << "Enter c: ";
    cin >> c;
    if (a < c){
      a = b + c;
      cout << a << b << c << endl;
    } else {
      cout << a << b << endl;
    }
    a += 1;
  }
  c = a * b;
  b = a / b + c;
  cout << a << b << c << endl;

  return 0;
}