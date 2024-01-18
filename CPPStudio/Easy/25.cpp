/**
 * С помощью цикла while разработать программу, которая будет вычислять сумму чисел нацело делящихся на 5. Цикл задать от 0 до введенного с клавиатуры числа.
 * Using the while loop, develop a program that will calculate the sum of numbers divisible by 5. Set the loop from 0 to the number entered from the keyboard.
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 0, sum = 0;
    while(i <= n) {
        if(i % 5 == 0)
            sum += i;

        i++;
    }

    cout << sum;


    return 0;
}