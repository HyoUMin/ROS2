#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            cout << "Sensor error detected, skipping cycle " << i << endl;
            continue;
        }
        cout << "Cycle " << i << ": Normal operation" << endl;
    }
    return 0;
}
