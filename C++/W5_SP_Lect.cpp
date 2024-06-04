#include <iostream>
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
}