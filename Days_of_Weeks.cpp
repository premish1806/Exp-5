// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
using namespace std;
int main() {
    int choice;
    cout << "DAY" << endl;
    cout << "1: Monday" << endl;
    cout << "2: Tuesday" << endl;
    cout << "3: Wednesday" << endl;
    cout << "4: Thursday" << endl;
    cout << "5: Friday" << endl;
    cout << "6: Saturday" << endl;
    cout << "7: Sunday" << endl;
    cout << "Enter number of day: ";
    cin >> choice;

    switch (choice) {
        case 1: cout << "Day is Monday"; break;
        case 2: cout << "Day is Tuesday"; break;
        case 3: cout << "Day is Wednesday"; break;
        case 4: cout << "Day is Thursday"; break;
        case 5: cout << "Day is Friday"; break;
        case 6: cout << "Day is Saturday"; break;
        case 7: cout << "Day is Sunday"; break;
        default: cout << "Invalid choice"; break;
    }
    return 0;
}
