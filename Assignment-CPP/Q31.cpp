#include <iostream>
using namespace std;
void swapValues(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int num1 = 10;
    int num2 = 20;
    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    swapValues(num1, num2);
    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    return 0;
}