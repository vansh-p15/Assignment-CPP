#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;
    string department;
    void insertDetails() {
        cout << "Enter name: ";
        cin>>name;
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter department: ";
        cin>>department;
    }
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Department: " << department << endl;
    }
};
int main() {
    Student student;
    student.insertDetails();
    cout << "Student Details:" << endl;
    student.displayDetails();
    return 0;
}