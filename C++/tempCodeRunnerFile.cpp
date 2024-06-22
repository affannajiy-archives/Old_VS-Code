#include <iostream>
using namespace std;

int main(){
  //Declare Variables
  int numStudents, numDays;
  string name, highestSpender;
  float groceries, transport, bill;
  float highestTotalExpenses = 0;
  
  //Inputs
  cout << "^^^STUDENT EXPENSES TRACKER^^^" << endl;
  cout << "Enter Number of Students: ";
  cin >> numStudents;
  cout << "Enter Number of Days: ";
  cin >> numDays;

  for (int student = 1; student <= numStudents; student++){ //Student Loop
    float totalExpenses = 0;
    cout << "---------------------------------" << endl;
    cout << "Enter Student " << student << " Name: "; //Name Input
    cin >> name;
    
    for (int day = 1; day <= numDays; day++){ //Expenses Loop
      cout << "\n++ EXPENSES " << name << " Day " << day << " ++"<< endl;
      cout << "Groceries: RM";
      cin >> groceries;
      cout << "Transportation: RM";
      cin >> transport;
      cout << "Bills: RM";
      cin >> bill;

      totalExpenses += groceries + transport + bill; //Calc Total Expenses
    }
  
    float avgExpenses = totalExpenses / numDays; //Calc Average Expenses
    cout << "\n=== " << name << " ===" << endl;
    cout << "Total Expenses: RM" << totalExpenses <<endl;
    cout << "Average Daily Expenses: RM" << avgExpenses << endl;

    if (totalExpenses > highestTotalExpenses){ //Choosing Highest Spender
      highestTotalExpenses = totalExpenses;
      highestSpender = name;
    }
  }

  //Output
  cout << "\n**HIGHEST SPENDER**" << endl;
  cout << "The Highest Spender: " << highestSpender << endl;
  cout << "Total Expenses " << highestSpender << ": RM" << highestTotalExpenses << endl;
  return 0;
}