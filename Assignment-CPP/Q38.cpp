#include <iostream>
using namespace std;
class Employee {
private:
    string name;
    int age;
    string designation;
public:
    void insertDetails(string n, int a, string d) {
        name = n;
        age = a;
        designation = d;
    }
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Designation: " << designation << endl;
    }
};
int main() {
    Employee emp[3];
    for (int i = 0; i < 3; i++) {
        string name, designation;
        int age;
        cout << "Enter details for Employee " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Designation: ";
        cin >> designation;
        emp[i].insertDetails(name, age, designation);
        cout << endl;
    }
    cout << "Employee Details:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Employee " << i + 1 << ":" << endl;
        emp[i].displayDetails();
        cout << endl;
    }
    return 0;
}