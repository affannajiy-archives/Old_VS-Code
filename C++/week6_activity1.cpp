#include <iostream>
using namespace std;

int main(){
  cout << "For Loop" << endl;
  for (int i = 1; i <= 5; i++){ //initial, cond, update
  cout << i;
  }
  cout << endl;

  cout << "\nWhile Loop" << endl;
  int i = 1; //intial
  while (i <= 5){ //cond
  cout << i;
  i++; //update
  }
  cout << endl;

  cout << "\nDo...While Loop" << endl;
  i = 1; //initial
  do
  {
    cout << i;
    i++; //update
  } while (i <= 5); //cond
  return 0;
}
