#include <iostream>
using namespace std;

int main() {
    double speed;
    int time;

    cout << "Enter speed (m/s) and time (s): ";
    cin >> speed >> time;

    double distance = speed * time;
    cout << "Distance = " << distance << " meters" << endl;
    return 0;
}
