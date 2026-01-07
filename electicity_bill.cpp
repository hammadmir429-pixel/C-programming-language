#include <iostream>
using namespace std;

int main()
{
    int units;
    float bill;
    const float maintenance_Fee = 39;
    const int allowed_Units = 100;  

    cout << "Enter electricity units consumed: ";
    cin >> units;

    if (units <= allowed_Units)
    {
        bill = (units * 5) + maintenance_Fee;
    }
    else
    {
        bill = (units * 10);
        bill = bill + (bill * 0.29);
        bill = bill + maintenance_Fee;
    }
    cout << "Total electricity bill: $" << bill;
    return 0;
}
