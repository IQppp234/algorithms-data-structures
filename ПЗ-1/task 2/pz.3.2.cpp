#include <iostream>

using namespace std;

int getTensDigit(int number) {
    return (number / 10) % 10;
}

int main() {
    int value;

    cout << "Input number: ";
    cin >> value;

    int tens = getTensDigit(value);
    cout << "Tens digit: " << tens << endl;

    return 0;
}