#include <iostream>
#include <cmath>

using namespace std;

class RightTriangle {
    double legX;
    double legY;

public:
    RightTriangle(double x = 0.0, double y = 0.0) {
        legX = x;
        legY = y;
    }

    double findHypotenuse() {
        return hypot(legX, legY);
    }
};

int main() {
    double katet1, katet2;

    cout << "Value of first cathetus: ";
    cin >> katet1;

    cout << "Value of second cathetus: ";
    cin >> katet2;

    RightTriangle shape(katet1, katet2);

    double answer = shape.findHypotenuse();
    cout << "Hypotenuse length: " << answer << endl;

    return 0;
}