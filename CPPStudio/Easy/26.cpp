/**
 * Программа должна выводить таблицу квадратов чисел от 1 до 5 (необходимо использовать табуляцию и перенос на новую строку, см. управляющие символы). В первом столбце должны находиться числа от 1 до 5 во втором столбце — квадраты этих чисел.
 * The program should output a table of squares of numbers from 1 to 5 (you must use tabs and newlines, see control characters). The first column should contain numbers from 1 to 5; the second column should contain the squares of these numbers.
*/

#include <iostream>

using namespace std;

int main() {
    cout << "Num \t\t\tPow\n";
    cout << "------\t\t\t-------------\n";
    cout << endl;


    for (int i=1; i<=5; i++) {
        cout << i << "\t\t\t" << i*i << endl;
    }

    return 0;
}