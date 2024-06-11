#include <iostream>
using namespace std;

int main() {
    int mark;
    cout << "Enter the student's mark: ";
    cin >> mark;

    string grade;

    switch (mark) {
        case 90 ... 100:
            grade = "Excellent";
            break;
        case 80 ... 89:
            grade = "Very Good";
            break;
        case 65 ... 79:
            grade = "Good";
            break;
        case 50 ... 64:
            grade = "Pass";
            break;
        case 0 ... 49:
            grade = "Fail";
            break;
        default:
            grade = "Not valid";
            break;
    }

    cout << "The student's grade is: " << grade << endl;
    return 0;
}