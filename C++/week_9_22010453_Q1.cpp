//Student ID: 22010453
#include <iostream>
using namespace std;

struct FullName{ //struct FullName
  string fname;
  string lname;
};

struct Course{ //struct Course
  string course_name;
  string course_code;
};

struct DateOfBirth{ //struct DOB
  int day;
  string month;
  int year;
};

struct Student{ //struct Student
  FullName name;
  DateOfBirth dob;
  Course courses[10]; //Assumption 10 Courses per Students
  int n;
};

int main(){
  int num_students;
  cout << "Enter Number of Students: ";
  cin >> num_students;
  Student students[num_students];

  for (int i = 0; i < num_students; ++i){ //Input
    cout << "-------------------------- " << endl;
    cout << "Enter Student (" << (i + 1) << ") First Name: "; //First Name
    cin >> students[i].name.fname;
    cout << "Enter Student (" << (i + 1) << ") Last Name: "; //Last Name
    cin >> students[i].name.lname;

    cout << "------------------------------------------------" << endl;
    cout << "Enter Student (" << (i + 1) << ") Day of Birth: "; //DayOB
    cin >> students[i].dob.day;
    cout << "Enter Student (" << (i + 1) << ") Month of Birth: "; //MonthOB
    cin >> students[i].dob.month;
    cout << "Enter Student (" << (i + 1) << ") Year of Birth: "; //YearOB
    cin >> students[i].dob.year;
    
    cout << "------------------------------------------------" << endl;
    cout << "Enter Number of Courses for Student " << (i + 1) << ": ";
    cin >> students[i].n;

    for (int j = 0; j < students[i].n; ++j){ //Courses
      cout << "Enter Course Code for Course " << (j + 1) << ": ";
      cin >> students[i].courses[j].course_code;
      cout << "Enter Course Name for Course " << (j + 1) << ": ";
      cin.ignore();
      getline(cin, students[i].courses[j].course_name); //Get the Whole Line
    }
  }
  
  cout << "\n----------------------";
  cout << "\nSTUDENT INFORMATION\n";
  cout << "----------------------\n";

  for (int i = 0; i < num_students; ++i){ //Output
    cout << "\n+++STUDENT (" << (i + 1) << ")+++" << endl;
    cout << "FULL NAME\t: " << students[i].name.fname << " " << students[i].name.lname << endl;
    cout << "DATE OF BIRTH\t: " << students[i].dob.day << " " << students[i].dob.month << " " << students[i].dob.year << "\n";

    cout << "COURSES:" << endl;
    for (int j = 0; j < students[i].n; ++j){
      cout << "\tCOURSE " << (j + 1) << ": " << students[i].courses[j].course_code << " - " << students[i].courses[j].course_name << "\n";
    }
  }
  return 0;
}
