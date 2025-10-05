#include <iostream>
#include <iomanip> //for setprecision
using namespace std;

int main()
{
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    // arrays to store course details
    float gradePoints[numCourses], creditHours[numCourses];

    float totalCredits = 0, totalGradePoints = 0;

    // taking input for each course
    for (int i = 0; i < numCourses; i++)
    {
        cout << "\nCourse " << i + 1 << ":\n";
        cout << "Enter grade (0 - 10 points): ";
        cin >> gradePoints[i];
        cout << "Enter credit hours: ";
        cin >> creditHours[i];

        totalCredits += creditHours[i];
        totalGradePoints += (gradePoints[i] * creditHours[i]);
    }

    float gpa = totalGradePoints / totalCredits;

    float cgpa = gpa;

    cout << "\n*********************************************************************\n";
    cout << "Course-wise details: \n";
    for (int i = 0; i < numCourses; i++)
    {
        cout << "Course " << i + 1 << "- Grade: " << gradePoints[i] << ", Credit Hours: " << creditHours[i] << endl;
    }

    cout << "*********************************************************************\n";
    cout << fixed << setprecision(2); // show resluts up to 2 decimal places
    cout << "Semester GPA: " << gpa << endl;
    cout << "Final CGPA: " << cgpa << endl;

    return 0;
}