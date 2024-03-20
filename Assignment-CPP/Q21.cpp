#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;
    int grade;
    if (marks >= 90)
        grade = 1;
    else if (marks >= 80)
        grade = 2;
    else if (marks >= 70)
        grade = 3;
    else if (marks >= 60)
        grade = 4;
    else if (marks >= 50)
        grade = 5;
    else
        grade = 6;
    switch (grade)
    {
        case 1:
            cout << "Grade: A" << endl;
            break;
        case 2:
            cout << "Grade: B" << endl;
            break;
        case 3:
            cout << "Grade: C" << endl;
            break;
        case 4:
            cout << "Grade: D" << endl;
            break;
        case 5:
            cout << "Grade: E" << endl;
            break;
        case 6:
            cout << "Grade: F" << endl;
            break;
        default:
            cout << "Invalid grade" << endl;
            break;
    }
    return 0;
}
