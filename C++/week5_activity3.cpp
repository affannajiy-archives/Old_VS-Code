#include <iostream>
using namespace std;

int main()
{
  int mark;
  string grade;
  cout << "Enter student's score (0-100): ";
  cin >> mark;

  if (mark >= 90 && mark <=100){
    grade = "EXCELLENT!!!!!";
  } else if (mark >= 80 && mark <= 89){
    grade = "VERY COOL";
  } else if (mark >= 65 && mark <= 79){
    grade = "GOOD";
  } else if (mark >= 50 && mark <= 64){
    grade = "PASS";
  } else if (mark >= 0 && mark <= 49){
    grade = "FAIL";
  } else{
    grade = "NOT VALID";
  }

  cout << "Student Grade " << grade << endl;
  return 0;
}