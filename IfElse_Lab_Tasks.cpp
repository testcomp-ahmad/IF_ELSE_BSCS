// NUML | BSCS | C++ Programming Lab
// Topic: If-Else Practice (Decision Making)
// All 5 lab tasks in one file. Each task is a separate function,
// and main() lets you choose which task to run.

#include <iostream>
using namespace std;

// 01 - Hot or Cold
void hotOrCold() {
    double temperature;
    cout << "Enter temperature: ";
    cin >> temperature;
    if (temperature > 30) {
        cout << "Hot";
    } else {
        cout << "Cold";
    }
    cout << endl;
}

// 02 - Divisible by 5
void divisibleByFive() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 5 == 0) {
        cout << "Divisible by 5";
    } else {
        cout << "Not divisible by 5";
    }
    cout << endl;
}

// 03 - Shopping Discount
void shoppingDiscount() {
    double billAmount, amountToPay;
    cout << "Enter bill amount: ";
    cin >> billAmount;
    if (billAmount >= 1000) {
        amountToPay = billAmount - (billAmount * 0.10);
    } else {
        amountToPay = billAmount;
    }
    cout << "Amount to pay: " << amountToPay << endl;
}

// 04 - Password Check (correct password is 1234)
void passwordCheck() {
    int password;
    cout << "Enter password: ";
    cin >> password;
    if (password == 1234) {
        cout << "Access granted";
    } else {
        cout << "Access denied";
    }
    cout << endl;
}

// 05 - Speed Limit (limit is 60 km/h)
void speedLimit() {
    double speed;
    cout << "Enter car speed (km/h): ";
    cin >> speed;
    if (speed > 60) {
        cout << "Over the speed limit";
    } else {
        cout << "Safe speed";
    }
    cout << endl;
}

int main() {
    int choice;

    cout << "==== If-Else Lab Tasks ====" << endl;
    cout << "1. Hot or Cold" << endl;
    cout << "2. Divisible by 5" << endl;
    cout << "3. Shopping Discount" << endl;
    cout << "4. Password Check" << endl;
    cout << "5. Speed Limit" << endl;
    cout << "Choose a task (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1: hotOrCold();       break;
        case 2: divisibleByFive(); break;
        case 3: shoppingDiscount(); break;
        case 4: passwordCheck();   break;
        case 5: speedLimit();      break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
