/**
 * Вычислить, не используя функцию pow, значения функции z(x,m) = xm sinm(xm), для значений аргументов: x от -1.1 до 0.3 с шагом 0.2; m от 1 до 5 с шагом 1.
 * Calculate, without using the pow function, the values ​​of the function z(x,m) = xm sinm(xm), for the argument values: x from -1.1 to 0.3 with steps of 0.2; m from 1 to 5 in steps of 1.
*/

#include <iostream>
#include <math.h>

using namespace std;

double step(double m, int e)
{
    double t = 1;
    for ( 0; e; e--)
        t = t * m;
    return t;
}
 
int main()
{
    const double x1 = -1.1, x2 = 0.3, dx = 0.2;
    double y;
    for (double x = x1; x < x2; x+=dx)
    {
        for (int m = 1; m < 5 ; ++m)
        {
            y = step(x,m)*step(sin(x*m),m);
            cout << "Value = " << y << "\t\t\tWith m = " << m << endl;
        }
        cout << "\t\tValue with x = " << x << endl;
    }

    return 0; 
}