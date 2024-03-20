#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (isupper(ch)) {
        cout << "The character is uppercase." << endl;
    } else if (islower(ch)) {
        cout << "The character is lowercase." << endl;
    } else if (isdigit(ch)) {
        cout << "The character is a digit." << endl;
    } else {
        cout << "The character is a special character." << endl;
    }

    return 0;
}