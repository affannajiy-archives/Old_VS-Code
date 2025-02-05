#include <iostream>
#include <cmath> // Include the cmath library for the pow function
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Calculate A = 1000 * n^3
    double A = 1000 * pow(n, 3);

    // Calculate B = 2^n
    double B = pow(2, n);

    // Output the results
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    if (A > B)
    {
      cout << "A is more than B" << endl;
    }
    else
    {
      cout << "B is more than A" << endl;
    }
    
    return 0;
}