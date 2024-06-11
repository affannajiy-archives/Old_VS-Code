#include <iostream>
using namespace std;

int main()
{
  int num1, num2, num3;
  cout << "Enter three numbers: ";
  cin >> num1 >> num2 >> num3;

  if(num1 < num2 && num1 < num3){
    cout << "Minimum number: " << num1;
  }else if (num2 < num1 && num2 < num3){
    cout << "Minimum number: " << num2;
  }else{
    cout << "Minimum number: " << num3;
  }
  //no need else cause the third else if is the 'else' of the other statement are false
  return 0;
}