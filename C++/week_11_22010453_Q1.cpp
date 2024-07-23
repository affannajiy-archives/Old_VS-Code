#include <iostream>
#include <iomanip> //For 2 Decimal Places(d.p)
using namespace std;

void calcArea(double l, double w){ //Area Rectangle
  double area = l * w;
  cout << "Area of Rectangle: " << area << endl;
}

void calcArea(double r){
  const double PI = 3.142;
  double area = PI * (r * r);
  cout << "Area of Circle   : " << area << endl;
}

void calcArea(double half, double b, double h){
  double area = half * b * h;
  cout << "Area of Triangle : " << area << endl;
}

int main(){
  double length, width, radius, base, height;

  //Input
  cout << "=======================" << endl;
  cout << "SHAPES AREA CALCULATOR" << endl;
  cout << "=======================" << endl;
  cout << "++RECTANGLE Input++" << endl;
  cout << "Enter Length: ";
  cin >> length;
  cout << "Enter Width: ";
  cin >> width;
  cout << "\n++CIRCLE Input++" << endl;
  cout << "Enter Radius: ";
  cin >> radius; 
  cout << "\n++TRIANGLE Input++" << endl;
  cout << "Enter Base: ";
  cin >> base;
  cout << "Enter Height: ";
  cin >> height;
  
  //Output
  cout << fixed << showpoint << setprecision(2); //Set for 2 d.p.
  cout << "------------------" << endl;
  calcArea(length, width);
  calcArea(radius);
  calcArea(0.5, base, height);
  cout << "------------------" << endl;
  return 0;
}