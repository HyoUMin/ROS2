#include <iostream>
using namespace std;

// 함수 선언 (프로토타입)
void turnLeft();
void turnRight();

int main() {
    turnLeft();
    turnRight();
    return 0;
}

// 함수 정의
void turnLeft() {
    cout << "Turning left..." << endl;
}

void turnRight() {
    cout << "Turning right..." << endl;
}
