#include <iostream>
using namespace std;

int main()
{
    double num1, num2, result;
    char operation;
    char choice;

    do
    {
        cout << "\n=== BASIC CALCULATOR ===" << endl;
        cout << "Enter  your first number: ";
        cin >> num1;
        cout << "Enter  the operation (+, -, *, /): ";
        cin >> operation;

        cout << "Enter  your second number: ";
        cin >> num2;

        switch (operation)
        {
        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << endl;
            break;

        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result << endl;
            break;

        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result << endl;
            break;

        case '/':
            if (num2 != 0)
            {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result << endl;
            }
            else
            {
                cout << "Error ! The given number is not divided by Zero" << endl;
            }
            break;

        default:
            cout << "Error! Operation is Invalid!" << endl;
            break;
        }

        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using this calculator!" << endl;
    
    return 0;
}