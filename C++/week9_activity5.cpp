#include <iostream>
using namespace std;

struct PayRoll{
  int empNumber;
  string name;
  int hours;
  float payRate;
  float grossPay;
};


int main(){
  int n;
  cout << "++EMPLOYEE PAY ROLL SYSTEM++" << endl;
  cout << "Enter number of Employee: ";
  cin >> n;
  PayRoll PR[n];

  for (int i = 0; i < n; i++){
    cout << "Enter Employee " << (i + 1) << " Number: ";
    cin >> PR[i].empNumber;
    cout << "Enter Employee " << (i + 1) << " Name: ";
    cin.ignore();
    getline(cin, PR[i].name);
    cout << "Enter Hours Worked: ";
    cin >> PR[i].hours;
    cout << "Enter Pay Rate: ";
    cin >> PR[i].payRate;
    PR[i].grossPay = PR[i].hours * PR[i].payRate;
  }
  
  cout << "----------------------------------------" << endl;
  for (int i = 0; i < n; i++){
    cout << "Employee " << (i + 1) << endl;
    cout << "Employee Number: " << PR[i].empNumber << endl;
    cout << "Employee Name: " << PR[i].name << endl;
    cout << "Hours Worked: " << PR[i].hours << endl;
    cout << "Pay Rate: " << PR[i].payRate << endl;
    cout << "Gross Pay: " << PR[i].grossPay << endl;
  }

  return 0;
}