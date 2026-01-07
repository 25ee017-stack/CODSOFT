#include <iostream>
using namespace std;

int main() {
    int choice;
    float num1, num2;

    cout << "===== SIMPLE CALCULATOR =====" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (choice) {
        case 1:
            cout << "Result = " << num1 + num2;
            break;
        case 2:
            cout << "Result = " << num1 - num2;
            break;
        case 3:
            cout << "Result = " << num1 * num2;
            break;
        case 4:
            if (num2 != 0)
                cout << "Result = " << num1 / num2;
            else
                cout << "Division by zero is not allowed";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}
