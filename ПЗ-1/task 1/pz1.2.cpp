#include <iostream>
#include <cmath>

using namespace std;

double getHypotenuse(double leg1, double leg2) {
    double sumOfSquares = leg1 * leg1 + leg2 * leg2;
    return sqrt(sumOfSquares);
}

int main() {
    double katetA, katetB;

    cout << "Введите первый катет: ";
    cin >> katetA;

    cout << "Введите второй катет: ";
    cin >> katetB;

    double result = getHypotenuse(katetA, katetB);

    cout << "Длина гипотенузы: " << result << endl;

    return 0;
}