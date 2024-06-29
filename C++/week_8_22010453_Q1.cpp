#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  //Declare Arrays
  float temp[3][7]; //3 Cities, 7 Days
  float avg_temp[3];
  cout << "==============================" << endl;
  cout << "  CITIES TEMPERATURE RECORDS  " << endl;
  cout << "==============================" << endl;
  cout << "\n";

  //Input
  for (int i = 0; i < 3; i++){ //City
    cout << "CITY " << (i + 1) << endl;
    for (int j = 0; j < 7; j++){ //Daily Temperature
      cout << "Enter Temperature City " << (i + 1) << " on Day " << (j + 1) << " °C: ";
      cin >> temp[i][j];
    }
    cout << "---------------------------------" << endl;
  }

  cout << fixed << setprecision(2); //Set Temp to 2 Decimal Places

  //Calc
  for (int i = 0; i < 3; i++){
    float sum = 0; //Reset Temp for Each City
    for (int j = 0; j < 7; j++){
      sum += temp[i][j];
    }
    avg_temp[i] = sum / 7.0; 
  }

  //Output
  for (int z = 0; z < 3; z++){
    float avg_tempCelsius = avg_temp[z];
    float avg_tempFahrenheit = (avg_tempCelsius * 9 / 5) + 32;
    cout << "City " << (z + 1) << " Average Temperature: " << avg_tempCelsius << "°C / " << avg_tempFahrenheit << "°F" << endl;
  }
  
  return 0;
}
