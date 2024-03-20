#include<iostream>
using namespace std;

int main()
{
    int num, reversedNum = 0, remainder, originalNum;
    cout << "Enter an integer: ";
    cin >> num;
    originalNum = num;
    // Reversing the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    // Checking if the number is a palindrome
    if (originalNum == reversedNum)
        cout << originalNum << " is a palindrome.";
    else
        cout << originalNum << " is not a palindrome.";
    return 0;
}