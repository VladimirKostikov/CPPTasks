/**
 * Составить программу, которая будет печатать ромб одним из значков (* или + или #) Выбор значков организовать оператором switch.
 * Create a program that will print a diamond using one of the icons (* or + or #). Select icons using a switch statement.
*/

#include <iostream>

using namespace std;

int main () {
    cout << "Choose the symbol" << endl;
    cout << " 1 - *" << endl;
    cout << " 2 - +" << endl;
    cout << " 3 - #" << endl;

    int id;
    cin >> id;

    if(0 < id && id < 4) {
        char* c;

        switch(id) {
            case 1:
                c = "*";
                break;
            case 2:
                c = "+";
                break;
            case 3:
                c = "#";
                break;
        }

        cout << "Input height and width" << endl;
        int height, width;

        cin >> height >> width;

        int p = 0;
        for(int i=1;i<=height;++i)
        {
            for(int g=1;g<=width;++g)
            {
                if(g == (width/2+1+p)|| g == (width/2+1-p))
                {
                    cout << c;
                }
                else
                {
                    cout<<" ";
                }
            }
            cout << endl;
            if (i<height/2+1) 
                p++;
            else p--;
        }
    }

    else {
        cout << "Incorrect input" << endl;
    }


    return 0;
}