/**
 * Найти алгебраическую сумму для выражения: 1k + 2k + 3k + … + Nk. N и степень k вводит пользователь.
 * Find the algebraic sum for the expression: 1k + 2k + 3k + … + Nk. N and k degree guide the user.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int N, k;

    cout << "Enter n:";
    cin >> N;
    cout << "Enter k:";
    cin >> k;

    int sum = 0;

    for(int i=0; i<N; i++) {
        sum += pow(i+1,k);
    }

    cout << "Sum: " << sum << endl;

    return 0;
}