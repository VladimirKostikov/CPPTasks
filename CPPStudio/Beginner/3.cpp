/**
 * 
Напишите программу, которая позволяет пользователю ввести в консоли латинскую букву нижнего регистра,  переводит её в верхний регистр и результат выводит в консоль. Смотрим пример работы программы, которая находится во вкладке — <<Решение>>, постарайтесь сами решить эту задачу, не подглядывая на уже готовое решение. Ну а если совсем ничего не будет получаться, тогда смело открывайте готовый исходник
Write a program that allows the user to enter a lowercase Latin letter in the console, converts it to uppercase and outputs the result to the console. We are looking at an example of how the program works, which is located in the "Solution" tab, try to solve this problem yourself, without peeking at the ready—made solution. Well, if nothing happens at all, then feel free to open the ready source code
*/

#include <iostream>

using namespace std;

int main() {
    char c;
    cin >> c;

    if('a' <= c && c <= 'z') {
        c = c - 32;
        cout << c << endl;
    }

    else {
        cout << "Not latin character." << endl;
    }
}