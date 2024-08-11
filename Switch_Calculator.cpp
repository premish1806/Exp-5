// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
using namespace std;
int main() {
    float a, b, c;
    int choice;
    cout << "Calculator" << endl;
    cout << "1: Addition" << endl;
    cout << "2: Subtraction" << endl;
    cout << "3: Multiplication" << endl;
    cout << "4: Division" << endl;
    cout << "Enter operation choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter numbers: ";
            cin >> a >> b;
            c = a + b;
            cout << "Sum is = " << c;
            break;
        case 2:
            cout << "Enter numbers: ";
            cin >> a >> b;
            c = a - b;
            cout << "Difference is = " << c;
            break;
        case 3:
            cout << "Enter numbers: ";
            cin >> a >> b;
            c = a * b;
            cout << "Product is = " << c;
            break;
        case 4:
            cout << "Enter numbers: ";
            cin >> a >> b;
            c = a / b;
            cout << "Quotient is = " << c;
            break;
        default:
            cout << "Invalid choice";
            break;
    }
    return 0;
}
