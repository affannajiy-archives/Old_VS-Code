#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  for (int i = 0; i <= 23 ; i++){
    for (int j = 0; j <= 59; j++){
      cout << setfill('0') << setw (2) << i << ":" << setfill('0') << setw (2) << j << endl;
    }
  }
  
  return 0;
}