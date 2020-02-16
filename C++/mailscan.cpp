#include <iostream>
#include <string>
#include <termcolor-master\include\termcolor\termcolor.hpp>
using namespace std;


int main() {

    cout << "Inserisci il tuo indirizzo di posta elettronica: ";
    string mail;
    cin >> mail;
    char a = char(64);
    for (int i = 0; i < mail.length(); i++) {

        if (mail[i] == a) {
            string nome = mail.substr(0, i);
            string dominio = mail.substr(i, mail.back());

            cout << "L'username " << char(138) << termcolor::yellow << " \t" << nome << termcolor::reset << endl;
            cout << "Il dominio " << char(138) << termcolor::yellow << " \t" << dominio << termcolor::reset << endl;
        }
    }
}