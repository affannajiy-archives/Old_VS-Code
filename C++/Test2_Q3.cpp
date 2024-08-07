#include <iostream>
#include <iomanip>
using namespace std;
 struct PayRoll{
  int empNumber;
  string name;
  int hours;
  double payRate;
  double grossPay;
 };

 int main(){
  PayRoll emp[3];

  for(int i = 0; i < 3; i++){
    cout << "Enter Employee Number: ";
    cin >> emp[i].empNumber;
    cout << "Enter Employee Name: ";
    cin.ignore();
    getline(cin, emp[i].name);
    cout << "Enter Hours Worked: ";
    cin >> emp[i].hours;
    cout << "Enter Pay Rate: ";
    cin >> emp[i].payRate;
    emp[i].grossPay = emp[i].hours * emp[i].payRate;
    cout << "\n";
  }
  
  cout << fixed << showpoint << setprecision(2);
  for(int i = 0; i < 3; i++){
    cout << "Employee Number: " << emp[i].empNumber << endl;
    cout << "Employee Name: " << emp[i].name << endl;
    cout << "Hours Worked: " << emp[i].hours << endl;
    cout << "Pay Rate: " << emp[i].payRate << endl;
    cout << "Gross Pay: " << emp[i].grossPay << endl;
    cout << "\n";
  }
  return 0;
 }