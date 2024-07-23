#include <iostream>
using namespace std;

void calcArea(double r){
  const double PI = 3.142; 
  cout << "Area of Circle: " << PI * (r * r) << " metre(s)" << endl;
}

void calcPerimeter(double r){
  const double PI = 3.142; 
  cout << "Perimeter of Circle: " << 2 * PI * r << " metre(s)" << endl;
}

int main(){
  double radius;
  cout << "Enter the Radius: ";
  cin >> radius;

  calcArea(radius);
  calcPerimeter(radius);

  return 0;
}