#include <iostream>
using namespace std;

void pattern(int a, char b){
  for(int j = 1; j <= a; j++){
    cout << b << " ";
    cout << endl;
  }
}

int main(){
  int line = 4;

  for(int r = line; r >= 1; r--){
    if (r % 2 == 0)
    pattern(r, '$');
    else
    pattern(r, '@');
  }
  return 0;
}