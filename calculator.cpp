#include <iostream>
#include <iomanip>  // For setting precision
#include <cmath>    // For mathematical functions

using namespace std;

// Function prototypes for each operation
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, double exponent);
double squareRoot(double a);
double sine(double a);
double cosine(double a);
double tangent(double a);
double logarithm(double a);
double exponential(double a);

int main() {
    double num1, num2;
    int operation;
    char continueCalc;

    do {
        // Display the operations available
        cout << "\n*** SCIENTIFIC CALCULATOR ***\n";
        cout << "Basic Operations:\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Power (^)\n\n";

        cout << "Advanced Operations:\n";
        cout << "6. Square Root (sqrt)\n";
        cout << "7. Sine (sin)\n";
        cout << "8. Cosine (cos)\n";
        cout << "9. Tangent (tan)\n";
        cout << "10. Logarithm (log)\n";
        cout << "11. Exponential (exp)\n";
        cout << "12. Quit\n";
        cout << "Enter your choice (1-12): ";
        cin >> operation;

        // Validate the operation input
        while (operation < 1 || operation > 12) {
            cout << "Invalid choice. Please enter a number between 1 and 12: ";
            cin >> operation;
        }

        if (operation == 12) {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

        // Input the numbers based on the operation
        if (operation >= 1 && operation <= 5) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        } else if (operation >= 6 && operation <= 11) {
            cout << "Enter a number: ";
            cin >> num1;
        }

        // Set precision for the output
        cout << fixed << setprecision(6);

        // Perform the operation and display the result
        switch(operation) {
            case 1:
                cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
                break;
            case 2:
                cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
                break;
            case 4:
                if (num2 != 0) {
                    cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
                } else {
                    cout << "Error! Division by zero is not allowed." << endl;
                }
                break;
            case 5:
                cout << num1 << " ^ " << num2 << " = " << power(num1, num2) << endl;
                break;
            case 6:
                if (num1 >= 0) {
                    cout << "sqrt(" << num1 << ") = " << squareRoot(num1) << endl;
                } else {
                    cout << "Error! Square root of a negative number is not allowed." << endl;
                }
                break;
            case 7:
                cout << "sin(" << num1 << ") = " << sine(num1) << endl;
                break;
            case 8:
                cout << "cos(" << num1 << ") = " << cosine(num1) << endl;
                break;
            case 9:
                cout << "tan(" << num1 << ") = " << tangent(num1) << endl;
                break;
            case 10:
                if (num1 > 0) {
                    cout << "log(" << num1 << ") = " << logarithm(num1) << endl;
                } else {
                    cout << "Error! Logarithm of non-positive numbers is not allowed." << endl;
                }
                break;
            case 11:
                cout << "exp(" << num1 << ") = " << exponential(num1) << endl;
                break;
            default:
                cout << "Invalid operation!" << endl;
        }

        // Ask if the user wants to continue
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> continueCalc;

    } while (continueCalc == 'y' || continueCalc == 'Y');

    cout << "Thank you for using the scientific calculator!" << endl;

    return 0;
}

// Function definitions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

double power(double base, double exponent) {
    return pow(base, exponent);
}

double squareRoot(double a) {
    return sqrt(a);
}

double sine(double a) {
    return sin(a);
}

double cosine(double a) {
    return cos(a);
}

double tangent(double a) {
    return tan(a);
}

double logarithm(double a) {
    return log(a);
}

double exponential(double a) {
    return exp(a);
}
