/**
 * Программа проверяет, является ли введенное с клавиатуры число — целым числом.
 * The program checks whether the number entered from the keyboard is an integer.
*/

#include <iostream>

using namespace std;

int main() {
    double n;
    cin >> n;

    if((n - int(n)) != 0)
        cout << "incorrect";
    else
        cout << "Correct";

    return 0;
}