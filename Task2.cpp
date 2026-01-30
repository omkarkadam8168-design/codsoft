#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    cout << "\n" << num1 << " " << operation << " " << num2 <<" : ";
    
    switch (operation) {
        case '+':
            cout << num1 + num2;
            break;

        case '-':
            cout << num1 - num2;
            break;

        case '*':
            cout << num1 * num2;
            break;

        case '/':
            if (num2 != 0)
                cout << num1 / num2;
            else
                cout << "Error: Division by zero is not allowed.";
            break;

        default:
            cout << "Invalid operation selected.";
    }

    return 0;
}
