/**
 * С помощью оператора цикла for, разработать программу, которая будет выводить таблицу умножения введенного пользователем числа с клавиатуры.
 * Using the for loop operator, develop a program that will display the multiplication table of a number entered by the user from the keyboard.
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=10; i++) {
        cout << n << " * " << i << " = " << i*n << endl;
    }

    return 0;
}