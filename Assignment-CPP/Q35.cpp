#include <iostream>
using namespace std;
class MyClass {
public:
    void myFunction() {
        static int count = 0;
        count++;
        cout << "Function called " << count << " times." << endl;
    }
};
int main() {
    MyClass obj1;
    MyClass obj2;
    obj1.myFunction(); 
    obj2.myFunction(); 
    obj1.myFunction(); 
    return 0;
}