/**
 * Напишите программу , в которой по извесной начальной скорости V и времени полета тела T определяется угол aльфа под которым тело брошено по отношению к горизонту (воспользуйтесь соотношением a = arcsin(gT/2V) ). Ниже показан вывод программы, которая у вас должна получиться:
 * Write a program in which, based on the known initial speed V and the flight time of the body T, the angle alpha at which the body is thrown relative to the horizon is determined (use the relation a = arcsin(gT/2V)). Below is the output of the program you should get:
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double v, t, param;
    const double Pi = asin(1.0), g = 9.8;

    cout << " V = ";
    cin >> v;
    
    cout<< endl << " T = ";
    cin >> t;

    if(1 < fabs(g*t/(2*v))) {
        cout << "Incorrect input" << endl;
        cout << g*t/(2*v) << endl;
    }

    else {
        param = asin(g*t/(2*v));
        cout << "Tangle:" << param*(90/Pi) << endl;
    }


    return 0;
}