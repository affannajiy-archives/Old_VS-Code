#include <iostream>
using namespace std;


struct student{ //stamp
  string name;
  int age;
  char grade;
} Student1, Student2;

int main(){
  student Student1, Student2;
  Student1.name = "Beomgyu"; //double quotation
  Student2.name = "Yeonjun";
  
  Student1.age = 23;
  Student2.age = 24;
  
  Student1.grade = 'A'; //single quotation for char
  Student2.grade = 'A';
  
  cout << "Student 1 Name: " << Student1.name;
  return 0;
}