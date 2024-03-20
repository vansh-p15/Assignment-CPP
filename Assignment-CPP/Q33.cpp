#include <iostream>
using namespace std;
void swapNumbers(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
int main() {
    int a = 5;
    int b = 10;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swapNumbers(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}