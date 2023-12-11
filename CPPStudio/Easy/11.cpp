/**
 * Запрограммировать генератор псевдослучайных чисел, используя конгруэнтный метод формирования псевдослучайных чисел.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    unsigned int X = 0;
    unsigned int A = 0;
    unsigned int C = 0;
    unsigned int M = 0;
    unsigned int iCount = 0;

    int nextNumber = 1;
    float x = 1;

    cout << "\t\tCongruent method for generating pseudorandom numbers\n";
    cout << "Enter the required data:\n";
    cout << "Enter value for M - module, where M > 2: ";
    cin >> M;
    cout << "Enter an initial value for X, where (0 <= X < M):";
    cin >> X;
    cout << "Enter the factor A, where (0 <= A < M): ";
    cin >> A;
    cout << "Enter the increment C, where (0 <= C < M):";
    cin >> C;
    cout << "Enter the number of pseudorandom numbers needed:";
    cin >> iCount;

    nextNumber = (A * X + C) % M;
    for (int i = 0; i < iCount; i++)
    {
    nextNumber = (A * nextNumber + C) % M;
    x = static_cast<float>(nextNumber) / M;
    cout << fixed << setprecision(2) << x << " ";
    }

    return 0;
}