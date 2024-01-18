/**
 * Вычислить сумму 1/sin1+1/(sin1+sin2)+…1/(sin1+…+sinn), где n — заданное натуральное число.
 * Calculate the sum 1/sin1+1/(sin1+sin2)+…1/(sin1+…+sinn), where n is the given natural number.
*/

#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    const double Pi = 3.1415;

    int n = 0;
    double sum = 0;
    double newSum = 0;

    cin >> n;
 
    for(int i = 1; i <= n; i++)
    {
        sum += sin((i)*(Pi/180));
        newSum += 1/sum;
    }
    cout << "Sum: " << newSum << endl;
 
    return 0;
}