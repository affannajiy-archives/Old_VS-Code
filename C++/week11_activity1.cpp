#include <iostream>
#include <cmath>
using namespace std;

float calc(float n1, float n2, float n3){
  return sin(n1) + (pow(n2, 2) / sqrt(n3));
}

int main(){
  cout << calc(30, 5, 25);
  return 0;
}