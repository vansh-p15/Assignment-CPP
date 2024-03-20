#include <iostream>
using namespace std;
int findGreatest(int num1, int num2, int num3) {
    int greatest = num1;
    if (num2 > greatest)
        greatest = num2;
    if (num3 > greatest)
        greatest = num3;
    return greatest;
}
int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    int result = findGreatest(a, b, c);
    cout << "The greatest number is: " << result << endl;
    return 0;
}