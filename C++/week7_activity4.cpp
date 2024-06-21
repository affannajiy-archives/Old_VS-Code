#include <iostream>
using namespace std;

int main(){
  for (int i = 1; i <= 10; i++){
    cout << i << "\t" << (i * 2) << "\t" << (i * 3) << "\t" << (i * 4) << "\t" << (i * 4) << "\t" << (i * 5) << "\t" << (i * 6) << "\t" << (i * 7) << "\t" << (i * 8) << "\t" << (i * 9) << "\t" << (i * 10) << endl;
  }

  for (int i = 1; i <= 10; i++){
    cout << "Table for " << i << ":" << endl;
    for (int j = 1; j <= 10; j++){
      cout << i << " x " << j << " = " << (i * j) << endl;
    }
    cout << endl;
  }
  return 0;
}