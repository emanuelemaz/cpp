#include <iostream>


using namespace std;

int main() {

    cout << "Digita le ore, i minuti e i secondi in tre input diversi\n";

    int h;
    int min;
    int s;

    cin >> h;
    cin >> min;
    cin >> s;

    int h_s;
    int min_s;

    h_s = h * 3600;
    min_s = min * 60;

    int tot;

    tot = h_s + min_s + s;

    cout << "Totale in secondi: " << tot;

}