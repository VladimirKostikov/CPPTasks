/**
 * Определить номер четверти плоскости, в которой находится точка с координатами X и Y , причем XY != 0. Координаты вводить с клавиатуры.
 * Determine the number of the quarter of the plane in which the point with coordinates X and Y is located, with XY != 0. The coordinates are entered with chains.
*/

#include <iostream>

using namespace std;

int main() {
    int x,y;
    cout << "Enter x and y" << endl;
    cin >> x >> y;

    if(x != 0 && y != 0) {
        if(x > 0) {
            if(y > 0) {
                cout << "I" << endl;
            }
            else {
                cout << "IV" << endl;
            }
        }

        else {
            if(y > 0) {
                cout << "II" << endl;
            }
            else {
                cout << "III" << endl;
            }
        }
    }
    else {
        cout << "Incorrect" << endl;
    }
}