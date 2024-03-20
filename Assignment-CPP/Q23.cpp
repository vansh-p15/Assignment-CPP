#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin>>str;
    int count[256] = {0};
    // Count the frequency of each character
    for (int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;
    }
    // Display the frequency of each character
    cout << "Frequency of characters in the string:" << endl;
    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            cout << (char)i << ": " << count[i] << endl;
        }
    }
    return 0;
}