#include <iostream>
using namespace std;
int main()
{
  float length, radius;
  float area_square, area_circle;
  float peri_square, peri_circle;
  float total_area, total_peri;
  const float PI = 3.14;
  
  //Input
  cout << "Length(m): ";
  cin >> length;
  cout << "Radius(m): ";
  cin >> radius;

  //Calc
  area_circle = PI * radius * radius;
  area_square = length * length;
  peri_circle = 2 * PI * radius;
  peri_square = 4 * length;
  total_area = area_circle + area_square;
  total_peri = peri_circle + peri_square;

  //Output
  cout << "Area Circle: " << area_circle << endl;
  cout << "Area Square: " << area_square << endl;
  cout << "Perimeter Circle: " << peri_circle << endl;
  cout << "Perimeter Square: " << peri_square << endl;
  cout << "Total Area: " << total_area << endl;
  cout << "Total Perimeter: " << total_peri << endl;

  return 0;
}