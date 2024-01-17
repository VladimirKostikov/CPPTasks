/**
 * Найти след матрицы,  след матрицы — сумма элементов главной диагонали. Размер матрицы вводит пользователь, матрицу заполнять случайными числами.
 * Find the trace of the matrix, the trace of the matrix is ​​the sum of the elements of the main diagonal. The size of the matrix is ​​entered by the user, the matrix is ​​filled with random numbers.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int size;
    cin >> size;

    int m[size][size] = {};

    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            m[i][j] = rand() % (99 - 10 + 1) + 10;
        }
    }

    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    int k = 0;
    int sum = 0;
    while(k < size) {
        sum += m[k][k];
        k++;
    }

    cout << "Diagonal sum: " << sum << endl;
    
    return 0;
}