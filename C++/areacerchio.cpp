#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {

    double pi = 3.14;
    double r;
    double d;
    double Area;
    double Circonferenza;

    string decisione;

    cout << "Se vuoi usare il raggio digita r, se vuoi usare il diametro digita d\n";
    cin >> decisione;

    if (decisione == "r") {

        cout << "\nInserisci il raggio del cerchio: ";
        cin >> r;

        cout << "\n";

        Area = pi * pow(r, 2);
        Circonferenza = pi * r * 2;
    }

    else if (decisione == "d") {

        cout << "\nInserisci il diametro del cerchio: ";
        cin >> d;

        cout << "\n";

        Area = pi * pow((d/2), 2);
        Circonferenza = pi * d;

    }

    else {

        exit(0);

    }

    cout << "Area: " << Area << "\n\n";
    cout << "Circonferenza: " << Circonferenza << "\n\n";

}