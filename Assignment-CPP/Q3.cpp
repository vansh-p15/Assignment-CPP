#include <iostream>
using namespace std;
int main() {
    
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    
    int asciiValue = static_cast<int>(ch);
    cout << "ASCII value of " << ch << " is " << asciiValue << endl;

    return 0;
}