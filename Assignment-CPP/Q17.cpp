#include<iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int sum = 0;
    int digit;
    while (number > 0)
    {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }
    cout << "Sum of digits: " << sum << endl;
    return 0;
}