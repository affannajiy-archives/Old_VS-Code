#include <iostream>
using namespace std;

int main(){
  float temp[7];

  //Input
  for (int i = 0; i < 7; i++){
    cout << "Enter temperature " << "day " << (i + 1) << " in Celsius: ";
    cin >> temp[i];
    cout << "Equivalence in Farenheit: " << (temp[i] * 1.8 + 32) << endl; //Farenheit
  }

  /*Average
  for (int i = 0; i < 7; i++){
    float sum = 0;
    float sum += temp[i];
  }*/

  //Max
  float max = temp[0];
  for (int i = 0; i < 7; i++){
    if (temp[i] > max){
      max = temp[i];
    }
  }
  cout << "Maximum Temperature: " << max << endl;
  
  return 0;
}