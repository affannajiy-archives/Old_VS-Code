#include <iostream>
#include <cmath> // Include the cmath library for the pow function
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
      // Calculate A = 1000 * n^3
      double A = 1000 * pow(i, 3);

      // Calculate B = 2^n
      double B = pow(2, i);

      // Output the results
      cout << "Iteration " << i << endl;
      cout << "A = " << A << "  B = " << B << endl;

      if (A > B)
      {
        cout << "A is more than B" << endl;
        cout << endl;
      }
     else
      {
        cout << "B is more than A" << endl;
        cout << endl;
      }
    }
    return 0;
}