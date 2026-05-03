#include <iostream>
using namespace std;

void moveForward() {
    cout << "Moving forward..." << endl;
}

void turnLeft() {
    cout << "Turning left..." << endl;
}

void stop() {
    cout << "Stop!" << endl;
}

int main() {
    moveForward();
    turnLeft();
    stop();
    cout << "Mission complete!" << endl;
    return 0;
}
