/**
 * Запрограммировать следующее выражение: (а + b — f / а) + f * a * a — (a + b) Числа а, b, f вводятся с клавиатуры. Организовать пользовательский интерфейс, таким образом, чтобы было понятно, в каком порядке должны вводиться числа.
 * Program the following expression: (a + b — f / a) + f * a * a — (a + b) The numbers a, b, f are entered from the keyboard. Organize the user interface in such a way that it is clear in which order the numbers should be entered.
*/

#include <iostream>

using namespace std;

int main() {
    int a,b,f;
    
    cout << "Input numbers: a, b, f" << endl;
    cin >> a >> b >> f;
    cout << (a + b - f / a) + f * a * a - (a + b) << endl;
}