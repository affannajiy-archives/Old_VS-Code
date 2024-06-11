#include <iostream>
using namespace std;

int main() {
    float minutes, cost;
    char time;
    
    cout << "Enter the duration of the call (minutes): ";
    cin >> minutes;
    cout << "Enter the time day (D = daytime, N = nighttime): ";
    cin >> time;

    if (time == "D" || time == "d"){
      cost = minutes * 0.12;
    } else if (time == "N" || time == "n"){
      cost = minutes * 0.05;
    } else {
      cout << "Invalid time of day output";
      return 1;
    }

    cout << "Cost of Call: RM" << cost << endl;
    return 0;
}



