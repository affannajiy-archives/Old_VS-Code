#include <iostream>
 using namespace std;
 int main()
 {
    int num = 0, num2 = 0, tot = 5;
    num++; // ++ is +1
    num2 = num2 + 1; //now num2 is 1
    cout << num << " " << num++ << num2 << endl; 
    
    --tot; //-- is -1 + 5
    cout << tot;
    return 0;
 }