/**
 * Составить программу-тест в MVS на языке программирования С++: на экране по очереди появляются вопросы (вопросы выбираются программистом), с вариантами ответов. В конце работы программа выдает количество заработанных баллов по результатам ответа.
 * Create a test program in MVS in the C++ programming language: questions appear on the screen one by one (the questions are selected by the programmer), with answer options. At the end of the work, the program displays the number of points earned based on the results of the answer.
*/

#include <iostream>
#define AMOUNT 3

using namespace std;

int main() {
    string question[AMOUNT] = {
        "Moscow is the capital of Russia?", 
        "Russia is the biggest country in the world?", 
        "The second city of Russia is Ufa?"
    };
    int answers[AMOUNT] = {
        1,
        1,
        2
    };

    int i = 0;
    while(i < AMOUNT) {
        cout << question[i] << endl;
        
        int answ;
        cin >> answ;

        if(answ != 1 && answ != 2) {
            cout << "Enter 1 (yes) or 2 (no)" << endl;
        }
        else {
            if(answ == answers[i]) {
                cout << "Correct" << endl;
            }
            else {
                cout << "Incorrect" << endl;
            }
            i++;
        }
    }

    return 0;
}