#include <iostream>
using namespace std;
int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sumOfNaturalNumbers(n - 1);
    }
}
int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    cout << "Sum of natural numbers up to " << num << " is: " << sumOfNaturalNumbers(num) << endl;
    return 0;
}