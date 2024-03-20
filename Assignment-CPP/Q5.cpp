#include <iostream>
using namespace std;
int main() {
    int days, years, weeks, remainingDays;

    cout << "Enter the number of days: ";
    cin >> days;

    years = days / 365;
    weeks = (days % 365) / 7;
    remainingDays = (days % 365) % 7;

    cout << "Years: " << years << endl;
    cout << "Weeks: " << weeks << endl;
    cout << "Days: " << remainingDays << endl;

    return 0;
}