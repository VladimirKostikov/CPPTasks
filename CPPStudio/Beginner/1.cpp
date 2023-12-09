/**
 * Составить программу, которая будет считывать введённое пятизначное число. После чего, каждую цифру этого числа необходимо вывести в новой строке.
 * Write a program that will read the entered five-digit number. After which, each digit of this number must be printed on a new line.
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int num;
    cin >> num;

    if(10000 <= num && num <= 99999) {
        string str = to_string(num);
        
        for(int i=0; i<str.length(); i++) {
            cout << 1+i << " number is " << str[i] << endl;
        }
    }

    else {
        cout << "Not five-digit number";
    }

    return 0;
}