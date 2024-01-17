/**
 * Поверьте, проще задания не бывает, организуйте ввод числа, а с переводом проблем возникнуть не должно. Вводная статья по С++ приводит пример, в котором как раз организован ввод. Для более лучшего понимания того, что нужно сделать, публикую результат работы программы. Нечто подобное и у вас должно получиться.
 * Believe me, the task couldn’t be simpler, arrange for the number to be entered, and there shouldn’t be any problems with translation. The introductory article on C++ gives an example in which input is organized. For a better understanding of what needs to be done, I am publishing the result of the program. You should be able to do something similar.
*/

#include <iostream>

using namespace std;


int main() {
    double a;
    cin >> a;

    cout << a << "m is " << a / 1000 << " km" << endl;
}