/**
 * Примечание: не использовать функцию pow для нахождения степени. Результат работы программы показан на рисунке 1. Подсказка — используйте циклы, в частности — цикл for.
 * Note: Do not use the pow function to find the degree. The result of the program is shown in Figure 1. Hint - use loops, in particular the for loop.
*/

#include <iostream>

using namespace std;

int main() {
    int num, pow;

    cout << "Enter num:";
    cin >> num;
    cout << endl << "Enter pow:";
    cin >> pow;

    int k = num;
    for(int i=1; i<pow; i++) {
        k = k*num;l;
    }

    cout << "Result:" << k << endl;
}