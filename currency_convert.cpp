#include <iostream>
using namespace std;

int main()
{
    int choice;
    float usd, convertedAmount;

    cout << "Currency Converter\n";
    cout << "1. USD to PKR\n";
    cout << "2. USD to Pound\n";
    cout << "3. USD to Euro\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter amount in USD: ";
    cin >> usd;

    switch (choice)
    {
        case 1:
            // USD to PKR
            convertedAmount = usd * 280;   
            cout << "Amount in PKR: " << convertedAmount;
            break;

        case 2:
            // USD to Pound
            convertedAmount = usd * 0.79;
            cout << "Amount in Pound: " << convertedAmount;
            break;

        case 3:
            // USD to Euro
            convertedAmount = usd * 0.92;  
            cout << "Amount in Euro: " << convertedAmount;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
