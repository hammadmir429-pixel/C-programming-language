#include <iostream>
using namespace std;

int main()
{
    int category, item, quantity;
    float price = 0, total = 0, discount = 0, finalAmount = 0;

    cout << "Select Category:\n";
    cout << "1. Electronics\n";
    cout << "2. Clothing\n";
    cout << "3. Groceries\n";
    cout << "Enter choice: ";
    cin >> category;

    switch (category)
    {
        case 1:
            cout << "\nElectronics Items:\n";
            cout << "1. Laptop ($1000)\n";
            cout << "2. Smartphone ($700)\n";
            cout << "3. Headphones ($150)\n";
            cout << "Enter item choice: ";
            cin >> item;

            switch (item)
            {
                case 1: price = 1000; 
                    break;
                case 2: price = 700;  
                    break;
                case 3: price = 150; 
                     break;
                default:
                    cout << "Invalid item choice";
                    return 0;
            }
            break;

        case 2: // Clothing Section 
            cout << "\nClothing Items:\n";
            cout << "1. Jacket ($120)\n";
            cout << "2. T-shirt ($40)\n";
            cout << "3. Jeans ($60)\n";
            cout << "Enter item choice: ";
            cin >> item;

            switch (item)
            {
                case 1: price = 120; break;
                case 2: price = 40;  break;
                case 3: price = 60;  break;
                default:
                    cout << "Invalid item choice";
                    return 0;
            }
            break;

        case 3: // Groceries Section 
            cout << "\nGroceries Items:\n";
            cout << "1. Milk (1 Liter - $2)\n";
            cout << "2. Bread (1 Loaf - $3)\n";
            cout << "3. Eggs (1 Dozen - $5)\n";
            cout << "Enter item choice: ";
            cin >> item;

            switch (item)
            {
                case 1: price = 2; break;
                case 2: price = 3; break;
                case 3: price = 5; break;
                default:
                    cout << "Invalid item choice";
                    return 0;
            }
            break;

        default:
            cout << "Invalid category choice";
            return 0;
    }

    cout << "Enter quantity: ";
    cin >> quantity;

    // Total price of items t
    total = price * quantity;

    // Discount for customer
    if (total < 100)
        discount = 0;
    else if (total <= 500)
        discount = total * 0.10;
    else
        discount = total * 0.20;

    finalAmount = total - discount;

    // finals 
    cout << "\n----- Invoice -----\n";
    cout << "Price per item: $" << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Total Price: $" << total << endl;
    cout << "Discount: $" << discount << endl;
    cout << "Final Amount to Pay: $" << finalAmount << endl;

    return 0;
}
