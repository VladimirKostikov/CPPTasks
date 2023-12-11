/**
 * Дан текст произвольной длины оканчивающийся символом  '#'. Определить количество строк в тексте, каждая строка заканчивается символом перевода строки '\n'.
 * Given a text of arbitrary length ending with the symbol '#'. Determine the number of lines in the text, each line ends with a newline character '\n'.
*/

#include <iostream>

using namespace std;

int main() {
    string text =   "Lorem ipsum dolor sit amet, \nconsectetur \nadipiscing elit, \nsed do eiusmod tempor incididunt ut labore#";

    int i = 0, count = 0;
    while(text[i] != '#') {
        if(text[i] == '\n') {
            count++;
        }
        i++;
    }
    
    cout << count << endl;

    return 0;
}