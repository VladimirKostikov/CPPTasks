/**
 * Написать программу преобразования десятичного числа в шестнадцатеричное.
 * Write a program to convert decimal to hexadecimal.
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout.setf(ios::showbase);
    cout << "Result: " << n << " = " << hex << n << endl;


    return 0;
}