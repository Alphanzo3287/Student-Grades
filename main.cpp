// Assignment 4E Gradebook BEGIN
// Week 4 Decisions, Nested If Structures

// Run this BEGIN file. Examine the code and analyze it. Run the program
// multiple times so that each branch is tested and verified. This code works 
// for an A student or a B student. It is not yet finished for a C, D, or F student.


// Review every line of code. 
// Once you fully understand the code add the following modifications
// Complete the code for a grade of C, D or F. 
// Include appropriate comments for a C grade and a D grade.
// Add logic so that if a student earns a D or F in the course, instead of displaying 
// the sentence  "Please see a counselor..." instead display a sentence stating "You must 
// retake the course before registering for advanced courses."
// Test all branches to ensure the program works correctly (Test for an A, B, C, D and F student)
// Submit the file in Replit

// Your Name
// CIS-5 Online or Hybrid
// Date
// Assignment

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string name;
    int test1, test2, test3;
    float avg;
    char grade;
    bool isActive;  // evaluates to true or false

    const float A_GRADE = 90.00;
    const float B_GRADE = 80.00;
    const float C_GRADE = 70.00;
    const float D_GRADE = 60.00;
    const float F_GRADE = 0.00; // Add a constant for F grade

    isActive = true;  // we will use this in future assignments

    cout << "Enter the student name: ";
    getline(cin, name);

    cout << "Enter three test scores between 0 and 100: ";
    cin >> test1 >> test2 >> test3;  // user may input integers only

    avg = static_cast<float>(test1 + test2 + test3) / 3;  // cast to a float for decimal

    cout << fixed << showpoint << setprecision(1);
    cout << endl << endl << name << "'s average = " << avg << endl;

    if ((avg >= A_GRADE) && (isActive == true))
    {
        grade = 'A';
        cout << "Congratulations! You are awesome. \n";
    }
    else if ((avg >= B_GRADE) && (isActive == true))
    {
        grade = 'B';
        cout << "Good job. You are brilliant. \n";
    }
    else if ((avg >= C_GRADE) && (isActive == true)) // Add logic for C grade
    {
        grade = 'C';
        cout << "You did well. You earned a passing grade. \n";
    }
    else if ((avg >= D_GRADE) && (isActive == true)) // Add logic for D grade
    {
        grade = 'D';
        cout << "You passed, but you should consider retaking the course. \n";
    }
    else
    {
        grade = 'F';
        cout << "You must retake the course before registering for advanced courses. \n";
    }
    cout << endl;

    cout << name << ", you earned a grade of " << grade << " in the course. \n";
    if (grade == 'F') // Modify the message for D and F grades
    {
        cout << "Please see your counselor for further guidance. \n\n\n";
    }
    else
    {
        cout << "Please see your counselor to register for next semester. \n\n\n";
    }

    return 0;
}

