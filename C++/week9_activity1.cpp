#include <iostream>
using namespace std;

int main(){
  string name1, name2;
  int age1, age2;
  char grade1, grade2;

  cout << "Enter 2 Student Name: ";
  cin >> name1 >> name2;

  cout << "Enter 2 Student Age: ";
  cin >> age1 >> age2;

  cout << "Enter 2 Student Grades: ";
  cin >> grade1 >> grade2;

  cout << "Student 1: " << name1 << ", Age: " << age1 << ", Grade: " << grade1 << endl;
  cout << "Student 2: " << name2 << ", Age: " << age2 << ", Grade: " << grade2 << endl;
  return 0;
}