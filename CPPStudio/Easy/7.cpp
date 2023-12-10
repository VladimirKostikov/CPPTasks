/**
 * Напишите программу, которая позволяет пользователю ввести в консоль три координаты вектора x, y, и z, с основанием у начала координат. Вычислите длину этого вектора и выведите её обратно в консоль. Вывод программы у вас должен быть похож на этот:
 * Write a program that allows the user to enter into the console three vector coordinates x, y, and z, with the base at the origin. Calculate the length of this vector and print it back to the console. Your program output should look like this:
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double x(0.0), y(0.0), z(0.0), length(0.0);

    cout << "Enter x:";
    cin >> x;
    cout << endl << "Enter y:";
    cin >> y;
    cout << endl << "Entery z:";
    cin >> z;

    length = sqrt(x*x + y*y + z*z);
    cout << "Length:" << length << endl;
    
    return 0;
}