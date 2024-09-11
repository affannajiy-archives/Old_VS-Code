#include <iostream>
#include <iomanip>
using namespace std;

class Date{
  public:
  // data
  int day;
  int month;
  int year;
}; // Only date

class Transaction {
  public:
  // data
  float val;
  Date date;
};

const int NUMTRANSACTIONS = 1000;
class TransactionList {
  public:
  // data
  Transaction transactions[10];  // the main data corresponds to the name of the class
    
  // operation
  void InputFromConsole(){
    for (int i = 0; i < 10; i++){
      cout << "Enter the transaction value: ";
      cin >> transactions[i].val;
      cout << "Enter the transaction date (Day)/(Month)/(Year): ";
      cin >> transactions[i].date.day >> transactions[i].date.month >> transactions[i].date.year;
      }
    }
  void OutputToConsole(){
    for (int i = 0; i < 10; i++){
      cout << "\nThe transaction value are RM " << fixed << setprecision(2) << transactions[i].val << endl;
      cout << "Date: " << transactions[i].date.day << " / " << transactions[i].date.month << " / " << transactions[i].date.year;
      }
    }
};

    // 2 companies, each company has 10 transactions
    
const int NUMCOMPANIES = 2;
TransactionList transactions[NUMCOMPANIES]; // array of Transaction objects

int option;

int main() {
  for (int i=0; i<2; i++){ //2 Companies
    while (true){
      cout << "Enter 1 for Input / 2 for Output: ";
      cin >> option;
      if (option == 1)
      // a single TransactionList object
        transactions[i].InputFromConsole();
      else if (option == 2)
        transactions[i].OutputToConsole();
      else
        cout << "Error" << endl;
      }
    }
  return 0;
}