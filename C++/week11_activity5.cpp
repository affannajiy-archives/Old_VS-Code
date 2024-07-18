#include <iostream>
#include <string>
using namespace std;

// Define the Employee struct
struct Employee{
    string name;
    int id;
    float salary;
};

void getEmployeeDetails(Employee &emp){ //& to globalise
  cout << "Enter Name: ";
  cin >> emp.name;
  cout << "Enter Employee ID: ";
  cin >> emp.id;
  cout << "Enter Salary: ";
  cin >> emp.salary;
}

void printEmployeeDetails(const Employee emp){ //cannot change employee data
  cout << "\n+++EMPLOYEE DETAILS+++" << endl;
  cout << "Employee Name  : " << emp.name << endl;
  cout << "Employee ID    : " << emp.id << endl;
  cout << "Employee Salary: RM " << emp.salary<< endl;
}

// ** A **
int main(){
  Employee emp;
    
  // Function to get employee details from the user
  getEmployeeDetails(emp);
    
  // Function to print employee details
  printEmployeeDetails(emp);

  return 0;
}