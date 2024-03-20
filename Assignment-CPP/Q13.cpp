#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int first = 0, second = 1;

    cout << "Fibonacci Series: ";
    cout << first << " " << second << " ";

    for (int i = 3; i <= n; ++i) {
        int next = first + second;
        cout << next << " ";

        first = second;
        second = next;
    }

    return 0;
}