#include <iostream>
using namespace std;

int main() {
    string violationLevel, cleanRecord;
    int baseFine = 0;
    double finalFine = 0.0;

    // Determine the base fine based on the violation level
    cout << "Enter the violation level (Minor, Major, Severe): ";
    cin >> violationLevel;
    if (violationLevel == "Minor") {
        baseFine = 100;
    } else if (violationLevel == "Major") {
        baseFine = 250;
    } else if (violationLevel == "Severe") {
        baseFine = 500;
    } else {
        cout << "Invalid violation level entered." << endl;
        return 1; // Exit the program with an error code
    }

    
    // Adjust the base fine based on the driving record
    cout << "Does the violator have a clean driving record? (Yes or No): ";
    cin >> cleanRecord;
    finalFine = baseFine;
    if ( cleanRecord == "Yes") {
        finalFine *= 0.8; // Apply a 20% discount
    } else if (cleanRecord != "No") {
        cout << "Invalid input for driving record." << endl;
        return 1; // Exit the program with an error code
    }

    cout << "Base Fine: RM " << baseFine << endl;
    if (cleanRecord == "Yes") {
        cout << "Discount Applied: RM " << baseFine - finalFine << endl;
    }
    cout << "Final Fine: RM " << finalFine << endl;

    return 0;
}