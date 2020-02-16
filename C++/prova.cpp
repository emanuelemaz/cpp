#include <iostream>

using namespace std;
int main(){
    int num1, num2, resto;
    cout <<"\nInserisci due numeri: " << endl;
    cin >> num1;
    cin >> num2;
    while(num2 > 0){
        resto = num1 % num2;
        num1 =num2;
        num2 = resto;
    }
cout << "\nIl M.C.D. e' " << num1;
}