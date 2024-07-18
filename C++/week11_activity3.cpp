/*Complete the C++ program below (//A) to include definition for function named calculateBonus(). 
The function receives salary and job category of an employee, 
and returns the Bonus for the employee as per table below.
Job category		Bonus
A			        RM500
B			        10% of salary
C		        	2 months salary
*/

#include <iostream>
using namespace std;

//A

double calculateBonus(double sal, char cat){
  if (cat == 'A'){
    sal = 500;
    return sal;
  } else if (cat == 'B'){
    sal = 0.1 * sal;
    return sal;
  } else {
    sal = 2 * sal;
    return sal;
  }
}

int main () {
    double salary; 
    char jobCat;

    //Input
    cout << "Enter salary RM: ";
    cin >> salary;
    cout << "Enter job category (A/B/C): ";
    cin >> jobCat;

    //Function Calling
    double bonus = calculateBonus(salary, jobCat);
    cout << "Bonus = RM " << bonus << endl;
    return 0;
} 
