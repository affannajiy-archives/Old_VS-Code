#include <iostream>
using namespace std;

struct FullName{
  string fname;
  string lname;
};

struct DateOfBirth{
  int day;
  string month;
  int year;
};

struct student{ //stamp
  FullName name;
  DateOfBirth dob; //DateofBirth becomes variable
  char grade;
};

int main(){
  int n;
  cout << "Enter number of students: ";
  cin >> n;
  student s[n];

  for (int i = 0; i < n; i++){ //Input
    cout << "Enter First Name " << (i + 1) << ": ";
    cin >> s[i].name.fname;
    cout << "Enter Last Name " << (i + 1) << ": ";
    cin >> s[i].name.lname;
    for (size_t i = 0; i < n; i++){ //Input DOB
      cout << "Enter Day " << (i + 1) << ": ";
      cin >> s[i].dob.day;
      cout << "Enter Month " << (i + 1) << ": ";
      cin >> s[i].dob.month;
      cout << "Enter Year " << (i + 1) << ": ";
      cin >> s[i].dob.year;
    }
    cout << "Enter Grade " << (i + 1) << ": ";
    cin >> s[i].grade;
  }

  for (int i = 0; i < n; i++){ //Output
    cout << "Student " << i + 1 << ": " << s[i].name.fname  << " " << s[i].name.lname << ", DOB: " << s[i].dob.day << "/" << s[i].dob.month << "/" << s[i].dob.year << ", Grade: " << s[i].grade << endl;
  }
  
  return 0;
}