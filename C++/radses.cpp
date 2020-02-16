#include <iostream>

using namespace std;
int main() {

double pnoiva;
cout << "\nInserisci il prezzo senza l'IVA: ";
cin >> pnoiva;
cout << "\n";

double iva;
iva = 0.22 * pnoiva;

double pconiva;
pconiva = pnoiva + iva;

cout << "Il prezzo con IVA " << char(138) << " di: " << pconiva << " euro." << "\n\n";
cout << "L'IVA ammonta a " << iva << " euro." << "\n\n";
}