#include <iostream>

using namespace std;
int main() {

    int x;
    cout << "Inserisci il primo numero: ";
    cin >> x;

    int y;
    cout << "Inserisci il secondo numero: ";
    cin >> y;

    if (x > y) {
        cout << "Il primo numero " << char(138) << " maggiore del secondo.";
    }
    else
    {
        cout << "Il secondo numero " << char(138) << " maggiore del primo.";
    }
    
}