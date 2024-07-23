#include <iostream>
using namespace std;

void calcArea(int l){
  double area = l * l;
  cout << "Area of Rectangle: " << area << endl;
}

void calcArea(double r){
  const double PI = 3.142;
  double area = PI * (r * r);
  cout << "Area of Circle: " << area << endl;
}

void calcArea(int b, double h){
  double area = (1 / 2) * b * h;
  cout << "Area of Triangle: " << area << endl;
}

int main(){
  double length, radius, base, height;
  cout << "Enter Length: ";
  cin >> length;
  cout << "Enter Radius: ";
  cin >> radius; 
  cout << "Enter Base: ";
  cin >> base;
  cout << "Enter Height: ";
  cin >> height;

  calcArea(length);
  calcArea(radius);
  calcArea(base, height);
    
  return 0;
}