/**
 * Программа должна находить точку пересечения двух линий. Даны следующие уравнения: y = ax2 + bx + c и y = dx + k. Как вы уже могли понять, это уравнения линий, где a, b, c, d, k — это числа, которые вводятся с клавиатуры. Необходимо найти значение икса.
 * The program must find the intersection point of two lines. The following equations are given: y = ax2 + bx + c and y = dx + k. As you might already understand, these are equations of lines, where a, b, c, d, k are numbers that are entered from the keyboard. It is necessary to find the value of X.
*/

#include <iostream>
#include <math.h>
#include <iomanip>
 
using namespace std;
 
int main()
{
    double a, b, c, d, k, x1, x2, y1, y2;
 

    cin >> a >> b >> c >> d >> k;

    x1 = (-(b-d) + sqrt(pow((b-d),2)-4*a*(c-k))) / (2*a);
    x2 = (-(b-d) - sqrt(pow((b-d),2)-4*a*(c-k))) / (2*a);
    y1 = d*x1+k;
    y2 = d*x2+k;

    if(x1 == x2) 
        cout << "Intersection: ["<< x1 << ", " << y1 << "]" << endl;
    else
        cout << "Intersections:" << endl << "[" << x1 << ", " << y1 << "] && " << "[" << x2 << ", " << y2 << "]" << endl;
}