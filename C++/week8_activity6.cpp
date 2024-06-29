#include <iostream>
using namespace std;

int main(){
  int marks[3][3];
  float cgpa[3];

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      cout << "Enter marks for Student " << (i + 1) << " in Course " << (j + 1) << ": ";
      cin >> marks[i][j];
    }
  }
  
  for (int i=0; i<3; i++){
    int sum = 0;
    for (int j=0; j<3; j++){
      sum += marks[i][j];
    }
    cgpa[i] = sum / 3.0; 
  }

  for (int i=0; i<3; i++){
    cout << "Student " << i+1 << " CGPA: " << cgpa[i] << endl;
  }
  
  return 0;
}