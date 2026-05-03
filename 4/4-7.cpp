#include <iostream>
using namespace std;

void moveUntilObstacle(int distance) {
    for (int i = 0; i < distance; i += 10) {
        if (i >= 50) {
            cout << "Obstacle detected at " << i << "cm. Stopping." << endl;
            break;
        }
        cout << "Moving... " << i << "cm" << endl;
    }
}

int main() {
    moveUntilObstacle(100);
    return 0;
}
