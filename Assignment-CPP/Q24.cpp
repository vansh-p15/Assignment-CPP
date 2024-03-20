#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    // Reverse the string
    string reversedStr = "";
    for (int i = str.length(); i >= 0; i--) {
        reversedStr += str[i];
    }
    cout << "Reversed string: " << reversedStr << endl;
    return 0;
}