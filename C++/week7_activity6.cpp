#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  for (int hours = 0; hours <= 23 ; hours++){ //hours
    for (int minutes = 0; minutes <= 59; minutes++){ //menits
      cout << setfill('0') << setw (2) << hours << ":" << setfill('0') << setw (2) << minutes << endl;
    }
  }
  return 0;
}