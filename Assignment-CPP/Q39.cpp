#include <iostream>
using namespace std;
class Time {
private:
    int hours;
    int minutes;
public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }
    void addTime(Time t1, Time t2) {
        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours + (minutes / 60);
        minutes %= 60;
    }
    void displayTime() {
        cout << "Sum of times: " << hours << ":" << minutes << endl;
    }
};
int main() {
    Time t1(2, 30);
    Time t2(1, 45);
    Time sum;
    sum.addTime(t1, t2);
    sum.displayTime();
    return 0;
}