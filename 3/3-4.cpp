#include <iostream>
using namespace std;

int main() {
    int battery = 100;

    while (battery > 0) {
        cout << "Battery = " << battery << "%" << endl;
        battery -= 20;
    }

    cout << "⚡ Battery empty. Please recharge." << endl;
    return 0;
}
