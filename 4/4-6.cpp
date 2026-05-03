#include <iostream>
using namespace std;

int battery = 100;  // 전역 변수

void useBattery(int amount) {
    battery -= amount;
    cout << "Battery now: " << battery << "%" << endl;
}

int main() {
    useBattery(20);
    useBattery(30);
    cout << "Final battery: " << battery << "%" << endl;
    return 0;
}
