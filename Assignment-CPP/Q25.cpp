#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int length = str.length();
    bool isPalindrome = true;
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;
    return 0;
}