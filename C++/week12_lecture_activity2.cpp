#include <iostream>
using namespace std;

void scramble(int i, int &j, int &k){
  i = 10;
  j = 20;
  k = 30;
}

int main(){
  int i=1, j=2, k=3;
  scramble(i, j, k);
  cout<< "i=" << i << " j=" << j << " k=" << k << endl;
  //return 0;

  //int i=1, j=2, k=3;
  scramble(j, j, j);
  cout<< "i=" << i << " j="<< j << " k=" << k << endl;
  return 0;
}