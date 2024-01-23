// main.cpp
#include <iostream>
#include <cmath>
using namespace std;

class Calculator {
public:
    double add(double a, double b) {
        double added_result = a + b;
        return added_result;
    }

    double subtract(double a, double b) {
        double subtracted_result = a - b;
        return subtracted_result;
    }

    double multiply(double a, double b) {
        double multiplied_result = a * b;
        return multiplied_result;
    }

    double divide(double a, double b) {
        double divided_result = 0;
        if (b != 0) {
            divided_result = a / b;
            return divided_result;
        }
        else {
            cout << "Error! Division by zero is not allowed." << endl;
            return divided_result;
        }
    }

};

int main() {
    Calculator calculator;
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
    case '+':
        cout << "Result: " << calculator.add(num1, num2) << endl;
        break;
    case '-':
        cout << "Result: " << calculator.subtract(num1, num2) << endl;
        break;
    case '*':
        cout << "Result: " << calculator.multiply(num1, num2) << endl;
        break;
    case '/':
        cout << "Result: " << calculator.divide(num1, num2) << endl;
        break;
    default:
        cout << "Invalid operation!" << endl;
    }

    return 0;
}