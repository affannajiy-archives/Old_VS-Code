#include <iostream>
using namespace std;

int main(){
  cout << "i\t" << "i+3\t" << "i*3\t" << "i/4";
  cout << endl;

  for (float i = 1; i <= 13; i += 2){
    cout << i << "\t" << (i + 3) << "\t" << (i * 3) << "\t" << (i / 4) << endl;
  }
  return 0;
}