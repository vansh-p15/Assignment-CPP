#include <iostream>
class Distance {
private:
    int meters;
    int centimeters;
public:
    Distance(int m, int cm) {
        meters = m;
        centimeters = cm;
    }
    void display() {
        std::cout << "Distance: " << meters << " meters " << centimeters << " centimeters" << std::endl;
    }
    Distance operator+(const Distance& other) {
        int totalMeters = meters + other.meters;
        int totalCentimeters = centimeters + other.centimeters;
        if (totalCentimeters >= 100) {
            totalMeters += totalCentimeters / 100;
            totalCentimeters %= 100;
        }
        return Distance(totalMeters, totalCentimeters);
    }
    Distance operator-(const Distance& other) {
        int totalMeters = meters - other.meters;
        int totalCentimeters = centimeters - other.centimeters;
        if (totalCentimeters < 0) {
            totalMeters -= 1;
            totalCentimeters += 100;
        }
        return Distance(totalMeters, totalCentimeters);
    }
};
int main() {
    Distance d1(5, 75);
    Distance d2(3, 50);
    Distance sum = d1 + d2;
    Distance diff = d1 - d2;
    sum.display();
    diff.display();
    return 0;
}