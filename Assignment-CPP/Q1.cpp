#include <iostream>
using namespace std;
int main() {
    int dividend, divisor;
    int quotient, remainder;

    // Input the dividend and divisor
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;

    // Calculate quotient and remainder
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    // Output the quotient and remainder
    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder << endl;
    return 0;
}
