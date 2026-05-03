#include <iostream>
using namespace std;

double calcSpeed(double distance, double time) {
    return distance / time;
}

int main() {
    double speed = calcSpeed(100.0, 5.0);
    cout << "Speed = " << speed << " m/s" << endl;
    return 0;
}