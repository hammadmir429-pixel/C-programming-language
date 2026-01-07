#include <iostream>
using namespace std;

int main()
{
    double balance;
    bool loyalCustomer;

    cout << "Enter account balance: $";
    cin >> balance;

    cout << "Is the customer loyal? (1 for Yes, 0 for No): ";
    cin >> loyalCustomer;

    string account_Type = (balance < 100) ? "Low Balance Account"
                        : (balance <= 500) ? "Standard Account"
                        : "Premium Account";

    string special_Offer = (balance > 200 && loyalCustomer) ? "You are Eligible for Special Offer" : "Not Eligible for Special Offer";

    cout << "Account Type: " << account_Type << endl;
    cout << "Special Offer: " << special_Offer << endl;
    return 0;
}
