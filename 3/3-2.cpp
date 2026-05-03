#include <iostream>
using namespace std;

int main() {
    int distance;
    cout << "Enter distance to obstacle (cm): ";
    cin >> distance;

    if (distance < 10)
        cout << "Stop immediately!" << endl;
    else if (distance < 30)
        cout << "Slow down." << endl;
    else
        cout << "Clear path ahead!" << endl;

    return 0;
}
