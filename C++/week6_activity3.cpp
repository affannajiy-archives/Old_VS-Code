#include <iostream>
using namespace std;

int main(){
  int num;
  cout << "Enter a Positive Number: ";
  cin >> num;

  int sum = 0;
  for (int i = 1; i <= num; i++){
    sum += i;
  }
  
  cout << "Sum: " << sum;
  return 0;
}
