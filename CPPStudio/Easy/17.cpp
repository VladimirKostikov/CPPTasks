/**
 * Составить программу, которая на входе должна получать последовательность цифр, после чего  программа показывает цифру, порядковый номер которой ввел пользователь.
 * Create a program that should receive a sequence of numbers as input, after which the program displays the number whose serial number was entered by the user.
*/

#include <iostream>

using namespace std;

int main() {
    string str;
    cout << "Enter numbers" << endl;
    cin >> str;

    int n;
    cout << "Enter order number" << endl;
    cin >> n;

    if(str[n-1] >= '0' && str[n-1] <= '9') {
        cout << str[n-1];
    }

    else {
        cout << "Not a number";
    }


    return 0;
}