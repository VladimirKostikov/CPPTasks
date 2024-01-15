/**
 * Программа должна, в качестве входных данных, принимать пятизначные числа и определять, является ли введенное пятизначное число палиндромом.
 * The program must, as input, take five-digit numbers and determine whether the input five-digit number is a palindrome.
*/

#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;

    cout << str;

    for(int i = str.length()-1; i>=0; i--) {
        cout << str[i-1];
    }

    return 0;
}