#include <iostream>
#include <iomanip>
using namespace std;

typedef struct{
  int day;
  int month;
  int year;
} Date; // Only date

class Transaction {
  public:
  float val;
  Date date;
 
//2D Array
  Transaction transactions[2][10];

  int option;

  void InputFromConsole(int company){
    for (int i = 0; i < 10; i++){
      cout << "Enter the transaction value: ";
      cin >> transactions[i].val;
      cout << "Enter the transaction date (Day)/(Month)/(Year): ";
      cin >> transactions[i].date.day >> transactions[i].date.month >> transactions[i].date.year;
    }
  }

  void OutputToConsole(int company){
    for (int i = 0; i < 10; i++){
      cout << "\nThe transaction value are RM " << fixed << setprecision(2) << transactions[i].val << endl;
      cout << "Date: " << transactions[i].date.day << " / " << transactions[i].date.month <<  " / " << transactions[i].date.year;
    }
  }
};


int main() {
  while (true){
    cout << "Enter 1 for Input / 2 for Output: ";
    cin >> option;
    if (option == 1)
      InputFromConsole();
    else if (option == 2)
      OutputToConsole();
    else
      cout << "Error" << endl;
    }
  return 0;
}