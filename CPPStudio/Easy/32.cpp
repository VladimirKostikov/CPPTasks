#include <iostream>
 
using namespace std;
 
int main() {
    int number;
    cin >> number;
    for(int y=1; y <= number; ++y)
    {
        for(int i=1; i <= number; ++i)
        {
            for(int x=1; x <= number-y; ++x)
            {
                cout << " ";
            }
            if(y==1)
            {
                cout << "*";
            }
            else
            {
                for(int x = (-1)*y; x < y-1; ++x)
                {
                    cout << "*";
                }
            }
            for(int x = 1; x <= number-y; ++x)
            {
                cout << " ";
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
