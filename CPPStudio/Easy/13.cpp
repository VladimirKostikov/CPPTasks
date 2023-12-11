/**
 * Составить алгоритм определяющий, есть ли среди цифр введенного трехзначного числа — одинаковые. Число вводится с клавиатуры.
 * Create an algorithm that determines whether any of the digits of the entered three-digit number are identical. The number is entered from the keyboard. 
*/

#include <iostream>

using namespace std;

int main() {
    int num;
    bool flag = false;

    cout << "Enter three-digit number" << endl;
    cin >> num;

    if(num >= 100 && num <= 999) {
        string str = to_string(num);
        for(int i=0; i<str.length(); i++) {
            for(int g=0; g<str.length(); g++) {
                if(i != g) {
                    if(str[i] == str[g]) {
                        flag = true;
                    }
                }
            }
        }

        if(flag) {
            cout << "Yes" << endl;
        }

        else {
            cout << "No" << endl;
        }
    }

    else {
        cout << "Incorrect" << endl;
    }

    return 0;
}