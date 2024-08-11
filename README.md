# Exp-5 Control Structures in C++ 

## Aim:
To understand and implement decision-making constructs in C++ programming, specifically using if-else statements and switch statements.

## Software Used:
- Dev c++

## Theory:
1.<strong>If-Else Statement:</strong><br>
.Description: The if-else statement allows a program to execute different code blocks based on conditions. It evaluates a condition and executes the associated block of code if the condition is true; otherwise, it executes the block of code in the else section if provided.<br>
.Usage: Commonly used for<strong> Code: </strong> <br>
branching logic where multiple conditions need to be evaluated.<br>

2.<strong>Switch Statement:</strong><br>
.Description: The switch statement is used to select one of many code blocks to be executed. It evaluates an expression and matches its value with a case label. The corresponding block of code is executed for the matched case.<br>
.Usage: Ideal for scenarios where multiple discrete values need to be evaluated, such as menu selection.<br>

## Program 1: Even and Odd
<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num == 0) {
        cout << "Entered number is 0";
    } else if (num % 2 == 0) {
        cout << "Entered number is Even";
    } else {
        cout << "Entered number is Odd";
    }
    return 0;
}
```
<strong> Output: </strong>
<br>

## Program 2: Leap Year

<strong> Code: </strong>
<br>
```cpp
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
```
<strong> Output: </strong>
<br>

## Program 3: Password Validation

<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
using namespace std;
int main() {
    string password;
    cout << "Enter the password: ";
    cin >> password;
    if (password == "secret") {
        cout << "Access Granted";
    } else {
        cout << "Access Denied";
    }
    return 0;
}

```
<strong> Output: </strong>
<br>

## Program 4: Days of Weeks

<strong> Code: </strong>
<br>
```cpp
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
```
<strong> Output: </strong>
<br>

## Program 5: Simple Calculator 

<strong> Code: </strong>
<br>
```cpp
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
```
<strong> Output: </strong>
<br>

## Program 6: Grade Evaluation

<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;

int main() {
    int s;
    cout << "Enter your score: ";
    cin >> s;
    if (s >= 90) {
        cout << "Your grade is A" << endl;
        cout << "You are passed" << endl;
    } else if (s >= 80) {
        cout << "Your grade is B" << endl;
        cout << "You are passed" << endl;
    } else if (s >= 70) {
        cout << "Your grade is C" << endl;
        cout << "You are passed" << endl;
    } else if (s >= 60) {
        cout << "Your grade is D" << endl;
        cout << "You are passed" << endl;
    } else if (s >= 50) {
        cout << "Your grade is E" << endl;
        cout << "You are passed" << endl;
    } else {
        cout << "Failed";
    }
    return 0;
}
```
<strong> Output: </strong>
<br>

## Conclusion:
 We learned that if-else statements help choose actions based on conditions, while switch statements simplify handling multiple choices for a single variable. Both tools are essential for making decisions in programs.
