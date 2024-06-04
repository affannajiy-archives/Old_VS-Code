/*#include <iostream>
using namespace std;

int main(){
  int status;
  cout << "Input status number(200, 403, 404, 500): ";
  cin >> status;

  switch(status){
    case 200: cout << "OK (fullfilled)"; break;
    case 403: cout << "Forbidden"; break;
    case 404: cout << "Not Found"; break;
    case 500: cout << "Server Error"; break;
  }
  return 0;
}*/

/*#include <iostream>
using namespace std;

int main(){
  int number = 1;
  while (number <= 5){
  cout << "Hello\n";
  }
  return 0;
}*/

#include <iostream>
using namespace std;

int main()
{
  int score1, score2, score3;
  double average;
  char again;

  do
  {
    // Get 3 Scores
    cout << "Enter 3 scores and I will Average them: ";
    cin >> score1 >> score2 >> score3;

    //Calc & Display Avg
    average = (score1 + score2 + score3) / 3.0;
    cout << "The average is " << average << ".\n";

    //Does user want again?
    cout << "Do you want to average another set? (Y/N) ";
    cin >> again;
  } while (again == 'Y' || again == 'y'); 
  return 0;
}
