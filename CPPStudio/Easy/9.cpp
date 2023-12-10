/**
 *  Дан одномерный массив, длину массива задаёт пользователь. Вычислить сумму квадратов тех чисел, модуль которых превышает значение 2,5.
*/

#include <iostream>

using namespace std;

int main() {
    int len;
    cin >> len; 
    int m[len];

    double sum = 0;
    for(int i=0; i<len; i++) {
        m[i] = (double)(rand() % 100) / (rand() % 100 + 1);
        cout << m[i] << endl;

        if(abs(m[i]) > 2,5) {
            sum += m[i];
        }
    }
    cout << "Sum: " << sum << endl;


    return 0;
}