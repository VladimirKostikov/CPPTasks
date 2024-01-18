/**
 * Используя оператор цикла do while, составить программу, которая будет требовать ввод цифр с клавиатуры до тех пор, пока не будет введена цифра 1.
 * Using the do while loop statement, write a program that will require digits to be entered from the keyboard until the number 1 is entered.
*/

#include <iostream>

using namespace std;

int main() {

    char x;
    do
    {
        cin >> x;
    } while (x != '1');


    return 0;
}