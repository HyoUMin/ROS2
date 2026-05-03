#include <iostream>
using namespace std;

int main() {
    int count = 0;

    while (true) {
        cout << "Moving..." << endl;
        count++;

        if (count == 5) {
            cout << "Reached target. Stopping." << endl;
            break;
        }
    }
    return 0;
}
