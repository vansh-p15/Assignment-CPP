#include <iostream>
inline float square(float num) {
    return num * num;
}
inline int square(int num) {
    return num * num;
}
int main() {
    float floatNum = 2.5;
    int intNum = 5;
    std::cout << "Square of " << floatNum << " is: " << square(floatNum) << std::endl;
    std::cout << "Square of " << intNum << " is: " << square(intNum) << std::endl;
    return 0;
}