#include <iostream>
#include <iomanip>
using namespace std;

// Variables declaration
char quit, mark_distribute;
string grade, next_grade;
int c = 0, total_subject, CH, total_CH, max_accumulation_point, total_max_accumulation_point, type_of_calculator;
double total_mark, grade_point, CW_mark, FE_mark, max_CW_mark, min_FE_mark, gpa, CGPA, accumulate_point, total_accumulate_point;

// Struct for student info
struct StudentInfo {
 string name;
 int ID;
} student;

// Function to convert total mark to grade point & grade
void Mark_to_Grade_Point() {
    if (total_mark >= 85 && total_mark <= 100) {
        grade_point = 4.0;
        grade = "A";
    }
    else if (total_mark >= 80 && total_mark < 85) {
        grade_point = 3.75;
        grade = "A-";
    }
    else if (total_mark >= 75 && total_mark < 80) {
        grade_point = 3.5;
        grade = "B+";
    }
    else if (total_mark >= 65 && total_mark < 75) {
        grade_point = 3.0;
        grade = "B";
    }
    else if (total_mark >= 55 && total_mark < 65) {
        grade_point = 2.5;
        grade = "C+";
    }
    else if (total_mark >= 50 && total_mark < 55) {
        grade_point = 2.0;
        grade = "C";
    }
    else if (total_mark >= 45 && total_mark < 50) {
        grade_point = 1.5;
        grade = "D+";
    }
    else if (total_mark >= 40 && total_mark < 45) {
        grade_point = 1.0;
        grade = "D";
    }
    else {
        grade_point = 0;
        grade = "F";
    }
}  

// Function to determine the next achievable grade with minimium final exam marks required
void Next_Grade() {
    //the nested if are for searching next achievable grade
    if (grade == "A") {
        if (next_grade == "A-") {
            next_grade = "B+";
            min_FE_mark = (75 - CW_mark);
        }
        else {
            next_grade = "A-";
            min_FE_mark = (80 - CW_mark);
        }
    }
    else if (grade == "A-") {
        if (next_grade == "B+") {
            next_grade = "B";
            min_FE_mark = (65 - CW_mark);
        }
        else {
            next_grade = "B+";
            min_FE_mark = (75 - CW_mark);
        }
    }
    else if (grade == "B+") {
        if (next_grade == "B") {
            next_grade = "C+";
            min_FE_mark = (55 - CW_mark);
        }
        else {
            next_grade = "B";
            min_FE_mark = (65 - CW_mark);
        }
    }
    else if (grade == "B") {
        if (next_grade == "C+") {
            next_grade = "C";
            min_FE_mark = (50 - CW_mark);
        }
        else {
            next_grade = "C+";
            min_FE_mark = (55 - CW_mark);
        }
    }
    else if (grade == "C+") {
        if (next_grade == "C") {
            next_grade = "D+";
            min_FE_mark = (45 - CW_mark);
        }
        else {
            next_grade = "C";
            min_FE_mark = (50 - CW_mark);
        }
    }
    else if (grade == "C") {
        if (next_grade == "D+") {
            next_grade = "D";
            min_FE_mark = (40 - CW_mark);
        }
        else {
            next_grade = "D+";
            min_FE_mark = (45 - CW_mark);
        }
    }
    else if (grade == "D+") {
        if (next_grade == "D") {
            next_grade = "F";
            min_FE_mark = 0;
        }
        else {
            next_grade = "D";
            min_FE_mark = (40 - CW_mark);
        }
    }
    else {
        next_grade = "F";
        min_FE_mark = 0;
    }
}

//Function to determine the minimum mark needed in the final exam to achieve a grade
void Min_FE() {
    if (grade == "A")
        min_FE_mark = (85 - CW_mark);
    else if (grade == "A-")
        min_FE_mark = (80 - CW_mark);
    else if (grade == "B+")
        min_FE_mark = (75 - CW_mark);
    else if (grade == "B")
        min_FE_mark = (65 - CW_mark);
    else if (grade == "C+")
        min_FE_mark = (55 - CW_mark);
    else if (grade == "C")
        min_FE_mark = (50 - CW_mark);
    else if (grade == "D+")
        min_FE_mark = (45 - CW_mark);
    else if (grade == "D")
        min_FE_mark = (40 - CW_mark);
    else 
        min_FE_mark = 0;
}

// Function to handle mark distribution input for mark distribution
void Mark_Distribution() {
    //repeat until the input are x/X/y/Y/z/Z 
    while (true) {
        cout << "Please select the mark distribution [X = CW-60%/FE-40%, Y = CW-50%/FE-50%, Z = CW-40%/FE-60%]: ";
        cin >> mark_distribute;
        switch (mark_distribute)
        {
        case 'X':
        case 'x':
            FE_mark = 40;
            max_CW_mark = 60;
            break;
        case 'Y':
        case 'y':
            FE_mark = 50;
            max_CW_mark = 50;
            break;
        case 'Z':
        case 'z':
            FE_mark = 60;
            max_CW_mark = 40;
            break;
        default:
            cout << "Error: Invalid input. Please enter [X, Y, Z] only. \n";
        }
        break; //break loop if the input is valid
    }
}

// Function to calculate CGPA
void Calculate_CGPA() {
    double last_CGPA, last_total_CH;
    cout << "Enter the last semester CGPA [Enter 0 if you doesn't have it]: "; // asking user if they have previous CGPA
    cin >> last_CGPA;

    
    if (last_CGPA != 0) {
        cout << "Enter the last semester total credit hour: ";
        cin >> last_total_CH;
        CGPA = ((last_CGPA * last_total_CH) + (gpa * total_CH)) / (last_total_CH + total_CH);
    }
    else {
        CGPA = gpa; //skip if the user doesnt have previous CGPA
    }
}

// Function for Mode 1 (Normal CGPA Calculator)
void CGPA_Calculator() {
    total_CH = 0;
    total_accumulate_point = 0;
    total_max_accumulation_point = 0;

    string subject_name;
    cout << "\nCGPA Calculator" << endl;
    cout << "Please enter the number of subject taken: "; //Asking user for amount of subjects taken
    cin >> total_subject;

    //declare subject name array, CH array, accumulate point array and grade array with size 
    string arr_subject_name [total_subject];
    int arr_CH [total_subject];
    double arr_accumulate_point [total_subject];
    string arr_grade [total_subject];

    //ask for subject name, CH, CW mark & FE mark for every subjects
    for (int i = 0; i < total_subject; i++) {
        cout << "\nPlease enter the name of the subject: ";
        cin.ignore();
        getline(cin, subject_name);
        arr_subject_name[i] = subject_name;

        cout << "Please enter the subject credit hour: "; 
        cin >> CH;
        total_CH += CH;
        arr_CH[i] = CH;

        cout << "Please enter the course work mark: ";
        cin >> CW_mark;
        cout << "Please enter the final examination mark: ";
        cin >> FE_mark;

        // The calculation
        total_mark = CW_mark + FE_mark;
        Mark_to_Grade_Point();
        arr_grade[i] = grade;
        accumulate_point = grade_point * CH;
        max_accumulation_point = 4 * arr_CH[i];
        total_max_accumulation_point += max_accumulation_point;
        arr_accumulate_point[i] = accumulate_point;
        total_accumulate_point += accumulate_point;
    }
    gpa = total_accumulate_point / total_CH;
    Calculate_CGPA();

    //write output
    cout << endl;
    cout << "CGPA Calculator" << endl;
    cout << "Student Name: " << student.name << endl 
         << "Student ID: " << student.ID << endl;
    cout << "========================================================================================================================" << endl;
    cout << left << setw(5) << "No." << setw(70) << "Course Name" << setw(15) << "Credit Hour" << setw(20) << "Accumulate Point" << setw(20) << "Grade" << endl;
    for (int j = 0; j < total_subject; j++) 
    {
        cout << left << setw(5) << (j + 1) << setw(70) << arr_subject_name[j] << setw(15) << arr_CH[j] << setw(20) << arr_accumulate_point[j] << setw(20) << arr_grade[j] << endl;
    }
    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Total Accumulation Point: " << total_accumulate_point << " / " << total_max_accumulation_point << endl;
    cout << "Total Credit Hour       : " << total_CH << endl;
    cout << "GPA: " << fixed << setprecision(2) << gpa << endl;
    cout << "CGPA: " << fixed << setprecision(2) << CGPA <<endl;
    cout << "========================================================================================================================" << endl;
    cout << endl;
    
}

// #Function for Mode 2 (CGPA Calculator with Programme Selection)
void CGPA_Calculator_with_Programme(){
    //declare array for Programmes
    string arr_Programme[] = {
            "Chemical Engineering", "Civil Engineering", "Computer Engineering",
            "Electrical & Electronics Engineering", "Material Engineering",
            "Mechanical Engineering", "Petroleum Engineering",
            "Information Systems", "Information Technology",
            "Computer Science", "Business Management",
            "Applied Chemistry", "Petroleum Geoscience"
    };

    cout << "\nCGPA Calculator with Programme Selection" << endl;
    // Display list of programmes
    for (int i = 0; i < 13; i++) {
        cout << i + 1 << ": " << arr_Programme[i] << endl;
    }
    // Prompt user for programme selection
    cout << "Please select your programme [Example: 1 = Chemical Engineering]: ";
    int programme_selection;
    cin >> programme_selection;

    //declare array for subject names and CH
    string arr_subject [6];
    int arr_CH [6];
    int size;
    // Initialize subjects and credit hours and it size based on the programme selection
    arr_subject[0] = "Penghayatan Etika & Peradaban"; arr_CH[0] = 2;
    arr_subject[1] = "Introduction to Oil & Gas Industry and Sustainable Development"; arr_CH[1] = 2;

    switch (programme_selection) {
        case 1:
            size = 5;
            arr_subject[2] = "Ethics and Integrity"; arr_CH[2] = 2;
            arr_subject[3] = "Engineering Mathematics I"; arr_CH[3] = 3;
            arr_subject[4] = "Physical Chemistry I"; arr_CH[4] = 3;
            break;
        case 2:
            size = 6;
            arr_subject[2] = "Ethics and Integrity"; arr_CH[2] = 2;
            arr_subject[3] = "Engineering Mathematics I"; arr_CH[3] = 3;
            arr_subject[4] = "Civil Engineering Drawing"; arr_CH[4] = 2;
            arr_subject[5] = "Engineering Mechanics"; arr_CH[5] = 3;
            break;
        case 3:
            size = 6;
            arr_subject[2] = "Ethics and Integrity"; arr_CH[2] = 2;
            arr_subject[3] = "Engineering Mathematics I"; arr_CH[3] = 3;
            arr_subject[4] = "Engineering Mechanics"; arr_CH[4] = 3;
            arr_subject[5] = "Programming for Engineers"; arr_CH[5] = 2;
            break;
        case 4:
            size = 6;
            arr_subject[2] = "Ethics and Integrity"; arr_CH[2] = 2;
            arr_subject[3] = "Engineering Mathematics I"; arr_CH[3] = 3;
            arr_subject[4] = "Circuit Theory"; arr_CH[4] = 3;
            arr_subject[5] = "Programming for Engineers"; arr_CH[5] = 2;
            break;
        case 5:
            size = 5;
            arr_subject[2] = "Ethics and Integrity"; arr_CH[2] = 2;
            arr_subject[3] = "Engineering Mathematics I"; arr_CH[3] = 3;
            arr_subject[4] = "Material Science"; arr_CH[4] = 3;
            break;
        case 6:
            size = 6;
            arr_subject[2] = "Ethics and Integrity"; arr_CH[2] = 2;
            arr_subject[3] = "Engineering Mathematics I"; arr_CH[3] = 3;
            arr_subject[4] = "Engineering Mechanics"; arr_CH[4] = 3;
            arr_subject[5] = "Workshop Technology"; arr_CH[5] = 2;
            break;
        case 7:
            size = 5;
            arr_subject[2] = "Ethics and Integrity"; arr_CH[2] = 2;
            arr_subject[3] = "Engineering Mathematics I"; arr_CH[3] = 3;
            arr_subject[4] = "Petroleum Engineering Fundamentals"; arr_CH[4] = 3;
            break;
        case 8:
            size = 5;
            arr_subject[2] = "Ethics and Integrity"; arr_CH[2] = 2;
            arr_subject[3] = "Mathematics for Computing I"; arr_CH[3] = 3;
            arr_subject[4] = "Fundamentals of Information Systems"; arr_CH[4] = 3;
            break;
        case 9:
            size = 6;
            arr_subject[2] = "Ethics and Integrity"; arr_CH[2] = 2;
            arr_subject[3] = "Mathematics for Computing I"; arr_CH[3] = 3;
            arr_subject[4] = "Fundamentals of Programming"; arr_CH[4] = 3;
            arr_subject[5] = "Computer Organization"; arr_CH[5] = 3;
            break;
        case 10:
            size = 5;
            arr_subject[2] = "Engineering Mathematics I"; arr_CH[2] = 3;
            arr_subject[3] = "Structured Programming"; arr_CH[3] = 3;
            arr_subject[4] = "Computer Systems"; arr_CH[4] = 4;
            break;
        case 11:
            size = 5;
            arr_subject[2] = "Management and Organisational Behavior"; arr_CH[2] = 2;
            arr_subject[3] = "Economics"; arr_CH[3] = 3;
            arr_subject[4] = "Business Mathematics"; arr_CH[4] = 3;
            break;
        case 12:
            size = 5;
            arr_subject[2] = "Falsafah dan Isu Semasa"; arr_CH[2] = 2;
            arr_subject[3] = "Health, Safety & Environment"; arr_CH[3] = 2;
            arr_subject[4] = "Mathematics for Scientists"; arr_CH[4] = 3;
            break;
        case 13:
            size = 6;
            arr_subject[2] = "Ethics and Integrity"; arr_CH[2] = 2;
            arr_subject[3] = "Engineering Mathematics I"; arr_CH[3] = 3;
            arr_subject[4] = "Physical Geology"; arr_CH[4] = 3;
            arr_subject[5] = "Fundamentals of Geophysics"; arr_CH[5] = 3;
            break;
        default:
            cout << "Error: Please enter the number 1 until 13 only.\n";
            size = 0;
            break;
    }

    //declare array and size based on size variable
    double arr_accumulate_point [size]; 
    string arr_grade [size];
    total_CH = 0;
    total_accumulate_point = 0;
    total_max_accumulation_point = 0;
    
    cout << "\nProgramme: " << arr_Programme[programme_selection - 1] << endl;
    for (int i = 0; i < size; i++) { 
        // Display all subjects name & CH
        cout << arr_subject[i] << endl;
        cout << "Credit Hour: " << arr_CH[i] << endl;
        //ask for CW mark and FE mark for every subjects
        cout << "Please enter the course work mark: ";
        cin >> CW_mark;
        cout << "Please enter the final examination mark: ";
        cin >> FE_mark;

        // The calculation
        total_CH += arr_CH[i];
        total_mark = CW_mark + FE_mark;
        Mark_to_Grade_Point();
        arr_grade[i] = grade;
        accumulate_point = grade_point * arr_CH[i];
        max_accumulation_point = 4 * arr_CH[i];
        total_max_accumulation_point += max_accumulation_point;
        arr_accumulate_point[i] = accumulate_point;
        total_accumulate_point += accumulate_point;
        cout << endl;
    }
    gpa = total_accumulate_point / total_CH;
    Calculate_CGPA();
    
    //write output
    cout << endl;
    cout << "CGPA Calculator with Programme Selection" << endl;
    cout << "Student Name: " << student.name << endl 
         << "Student ID: " << student.ID << endl
         << "Programme: " << arr_Programme[programme_selection - 1] << endl;
    cout << "========================================================================================================================" << endl;
    cout << left << setw(5) << "No." << setw(70) << "Course Name" << setw(15) << "Credit Hour" << setw(20) << "Accumulate Point" << setw(20) << "Grade" << endl;
    for (int j = 0; j < size; j++)
    {
        cout << left << setw(5) << (j + 1) << setw(70) << arr_subject[j] << setw(15) << arr_CH[j] << setw(20) << arr_accumulate_point[j] << setw(20) << arr_grade[j] << endl;
    }
    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Total Accumulation Point: " << total_accumulate_point << " / " << total_max_accumulation_point << endl;
    cout << "Total Credit Hour       : " << total_CH << endl;
    cout << "GPA : " << fixed << showpoint << setprecision(2) << gpa << endl;
    cout << "CGPA: " << fixed << showpoint << setprecision(2) << CGPA << endl;
    cout << "========================================================================================================================" << endl;
    cout << endl;
}

// #Function for Mode 3 (Target Grade Estimation Calculator)
void Target_Grade_Estimation() {
    cout << "\nTarget Grade Estimation Calculator" << endl;
    Mark_Distribution();

    //repeat until the input is valid double number
    while (true) {
        CW_mark = 0;
        cout << "Please enter the Course Work mark: ";
        cin >> CW_mark;

        // Check if the input is within the valid range
        if (CW_mark > max_CW_mark) {
            cout << "Your Course Work mark is more than " << max_CW_mark << "%\n";
        }
        else if (CW_mark < 0) {
            cout << "Your Course Work mark cannot be less than 0\n";
        }
        else {
            cout << "Valid Course Work mark entered.\n";
            break; // Exit the loop if the input is valid
        }
    }
    // The calculation
    total_mark = CW_mark + FE_mark;
    Mark_to_Grade_Point();
    Min_FE();

    //write output
    cout << endl;
    cout << "Target Grade Estimation Calculator" << endl;  
    cout << "Student Name: " << student.name << endl 
         << "Student ID: " << student.ID << endl;
    cout << "Mark Distribution" << endl;
    cout << "Course Work: " << max_CW_mark << "%" << endl;
    cout << "Final Exam: " << FE_mark << "%" << endl;
    cout << "Your Course Work mark: " << CW_mark << endl;
    cout << "--------------------------------------------------------------------------------------------" << endl;
    cout << "To get the grade " << grade << ", you need to score minimum " << min_FE_mark << "% in Final Examination.\n";
    
    Next_Grade();
    
    cout << "To get the grade " << next_grade << ", you need to score minimum " << min_FE_mark << "% in Final Examination.\n";
    if (next_grade == "F") {
        cout << "--------------------------------------------------------------------------------------------" << endl;
        cout << endl;
    }
    else {
        Next_Grade();
        cout << "To get the grade " << next_grade << ", you need to score minimum " << min_FE_mark << "% in Final Examination.\n";
        cout << "--------------------------------------------------------------------------------------------" << endl;
        cout << endl;
    }
    
}

int main() //the main function
{
    //repeat endlessly until the user want to quit 
    cout << "========================================================================================================================" << endl
         << setw(73) << right << "WELCOME TO CGPA CALCULATOR" << endl
         << "========================================================================================================================" << endl
         << "Enter Your Name: ";
    getline(cin, student.name);
    cout << "Enter Your ID: ";
    cin >> student.ID;
    do
    {   // Ask user for clculator mode
        cout << "\nPlease select the type of calculator you want to use:" << endl;
        cout << "1. CGPA Calculator" << endl;
        cout << "2. CGPA Calculator with Programme Selection" << endl;
        cout << "3. Target Grade Estimation Calculator" << endl;
        cout << "Enter your choice (1, 2, or 3): ";
        cin >> type_of_calculator;
        
        switch (type_of_calculator) {
        case 1:
            CGPA_Calculator();
            c = 1;
            break;
        case 2:
            CGPA_Calculator_with_Programme();
            c = 1;
            break; 
        case 3:
            Target_Grade_Estimation();
            c = 1;
            break;
        default:
            cout << "\nError: Invalid input. Please enter [1, 2, 3] only. \n";
         }
        //ask user if he want to quit
        if (c == 1) {
            cout << "Enter x if you want to quit / any character to continue: ";
            cin >> quit;
            //quit program
            if ((quit == 'x') || (quit == 'X')) {
                cout << "\nThank you for using our CGPA calculator.";
                break;
            }
        }

    } while (true);
  return 0;
}