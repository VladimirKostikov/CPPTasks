/**
 * Create a program for tabulating a function programming in C++ on the interval [a,b] with step h, in the C++ programming language in the MVS2010 development environment, in the console.
 * Составить программу табулирования функции программирование на С++ на интервале [a,b] с шагом h, на языке программирования С++ в среде разработки MVS2010, в консоли.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float h = 0.1, a = 5.0 / 100, b = a + 0.5;
    cout << "y = ";

    for(a; a <= b; a += 0.1) {
        cout << pow(cos(log(a)) / sin(log(a)), 2) << "; ";
    }
    return 0;
}