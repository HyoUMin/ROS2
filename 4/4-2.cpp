#include <iostream>
using namespace std;

void moveForward(int distance) {
    cout << "Moving forward " << distance << "cm." << endl;
}

int main() {
    moveForward(50);
    moveForward(100);
    return 0;
}
