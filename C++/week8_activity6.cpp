#include <iostream>
using namespace std;

int main(){
  int marks[3][3];
  float cgpa[3];

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; i++){
      cout << "Enter marks for Student " << (i + 1) << " in Course " << (j + 1) << ": ";
      cin >> marks[i][j];
    }
  }
  
  return 0;
}