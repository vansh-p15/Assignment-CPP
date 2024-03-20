#include <iostream>
using namespace std;
double power(double base, int exponent) {
    // Base case: if exponent is 0, return 1
    if (exponent == 0) {
        return 1;
    }
    // Recursive case: multiply base with power(base, exponent - 1)
    return base * power(base, exponent - 1);
}
int main() {
    double base;
    int exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    double result = power(base, exponent);
    cout << base << " raised to the power of " << exponent << " is " << result << endl;
    return 0;
}