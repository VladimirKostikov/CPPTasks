/**
 * Найти Y, если Y = X1 + X2 + … + Xn,   X = Z^3 - B + A^2 / tg^2?. Количество X вводятся пользователем программы. Для каждого X значения Z, B, А, ? разные (вводятся пользователем программы).
 * Find Y if Y = X1 + X2 + ... + Xn, X = Z^3 - B + A ^2 / tg^2?. The number X is entered by the program user. For each X, the values of Z, B, A, ? different (programs are entered by the user).
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int amount;
    double y = 0;

    cout << "Enter amount of X:";
    cin >> amount;


    for(int i=0; i<amount; i++) {
        double z,b,a,x;
        double betta;
        
        cout << "Enter Z, B, A, Betta for X" << i+1 << endl;
        cin >> z >> b >> a >> betta;

        x = pow(z, 3) - b + pow(a, 2) / pow(tan(betta), 2);
        y += x;
        
    }   


    cout << "y = " << y;
}