#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter number: ";
  cin >> n;

  for (int i = 1; i <= n; i++){
    for (int j = i; i <= n; j++){
      cout << " ";
    }
    for (int j = i; j <= n; j++){
      cout << j;
    }
    cout << endl; 
  }
  return 0;
}