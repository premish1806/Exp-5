// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
using namespace std;
int main() {
    int y;
    cout << "Enter year to check: ";
    cin >> y;
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
        cout << y << " is a leap year";
    } else {
        cout << y << " is not a leap year";
    }
    return 0;
}
