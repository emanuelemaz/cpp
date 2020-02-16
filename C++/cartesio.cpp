#include <iostream>
#include <math.h>

using namespace std;

int main() {

    double x1;
    double y1;

    cout << "Inserisci il punto x1: ";
    cin >> x1;
    cout << "Inserisci il punto y1: ";
    cin >> y1;

    double x2;
    double y2;

    cout << "Inserisci il punto x2: ";
    cin >> x2;
    cout << "Inserisci il punto y2: ";
    cin >> y2;

    double x3 = pow((x2 - x1), 2);
    double y3 = pow((y2 - y1), 2);
    double d = pow((x3 + y3), 0.5);

    cout << "La distanza tra i due punti " << char(138) << " di " << d << " unit" << char(133);

    //La distanza fra i due punti è (((x2 - x1)^2) + ((y2 - y1)^2)))^0.5

}