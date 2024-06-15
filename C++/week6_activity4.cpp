#include <iostream>
using namespace std;

int main(){
  int sum = 0;
  int num = 0;

  while (num >= 0){
    cout << "Enter a Number: ";
    cin >> num;
    if (num > 0){
      sum += num;
    }
  }

  cout << "Sum: " << sum;
  return 0;
}
