/**
 * Напишите программу, которая должна определить, пройдет ли кирпич в отверстие. Размеры отверстия (длина и высота) вводит пользователь. Тоже самое касается габаритов кирпича, пользователь вводит в программу значения длины, ширины и высоты кирпича.
 * Write a program to determine whether a brick will fit into a hole. The hole dimensions (length and height) are entered by the user. The same applies to the dimensions of the brick; the user enters the length, width and height of the brick into the program.
*/


#include <iostream>

using namespace std;

int main() {
    int stone_len, stone_height, stone_width;
    int hole_len, hole_width;

    cout << "Enter stone len, height, width" << endl;
    cin >> stone_len >> stone_height >> stone_width;

    cout << "Enter hole len, width " << endl;
    cin >> hole_len >> hole_width;

    if ((stone_len <= hole_len ||  stone_width <= hole_len) & stone_height <= hole_width)
    {
        cout << "Brick went into the hole!" << endl;
    }
    else
    {
        cout << "Brick can not went into the hole!" << endl;
    }

    return 0;
}