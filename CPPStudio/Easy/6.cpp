/**
 * Суть задачи: по введенному номеру дня недели вывести его название, используя оператор множественного выбора. Нумерация дней недели начинается с 1 – понедельник, 2 — вторник и т. д.
 * The essence of the task: based on the entered number of the day of the week, display its name using the multiple selection operator. The numbering of the days of the week starts from 1 – Monday, 2 – Tuesday, etc. d.
*/


#include <iostream>

using namespace std;

int main() {
    string days[] = {   "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"    };

    cout << "1." << days[0] << endl;
    cout << "2." << days[1] << endl;
    cout << "3." << days[2] << endl;
    cout << "4." << days[3] << endl;
    cout << "5." << days[4] << endl;
    cout << "6." << days[5] << endl;
    cout << "7." << days[6] << endl;

    int day;
    cout << "Enter num of day" << endl;
    cin >> day;

    switch(day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            cout << "Day:" << days[day-1] << endl;
            break;
        default:
            cout << "Incorrect day" << endl;
            break;
    }

    return 0;
}