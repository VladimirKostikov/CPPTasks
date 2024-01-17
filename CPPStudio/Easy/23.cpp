/**
 * Разработать функцию, в которую передаются в качестве аргументов массив типа float и его размер. Функция должна возвращать среднее арифметическое элементов массива.
 * Develop a function that takes a float array and its size as arguments. The function must return the arithmetic mean of the array elements.
*/

#include <iostream>

using namespace std;

float average(float arr[], int size) {
    float sum = 0;
    for(int i=0; i<size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    int size = 3;
    float arr[size] = {12, 23, 32};

    cout << average(arr, size);
    
    return 0;
}