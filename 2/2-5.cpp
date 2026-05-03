#include <iostream>
using namespace std;

int main() {
    const double MAX_SPEED = 1.0;   // m/s
    double current = 0.6;

    if (current > MAX_SPEED)
        cout << "⚠️ Speed limit exceeded!" << endl;
    else
        cout << "Speed OK." << endl;

    return 0;
}
