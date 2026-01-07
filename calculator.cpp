#include <iostream>
using namespace std;

int main()
{
    float num1, num2, result;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch(op)
    {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result;
            break;

        case '-':
            result = num1 - num2;
            cout << "Result: " << result;
            break;

        case '*':
            result = num1 * num2;
            cout << "Result: " << result;
            break;

        case '/':
            if(num2 != 0)
            {
                result = num1 / num2;
                cout << "Result: " << result;
            }
            else
            {
                cout << "Error: Division by zero!";
            }
            break;

        default:
            cout << "Error:Using Invalid operator!";
    }
    return 0;
}
