#include <iostream>
using namespace std;

int main() {
    int distance = 100;  // 목표까지 거리 (cm)
    bool obstacle = false;

    while (distance > 0) {
        cout << "Distance to target: " << distance << "cm" << endl;

        if (distance < 30) {
            obstacle = true;
        }

        if (obstacle) {
            cout << "Obstacle detected! Stopping..." << endl;
            break;
        }

        distance -= 10;
    }

    cout << "Mission complete." << endl;
    return 0;
}
