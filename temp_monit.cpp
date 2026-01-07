#include <iostream>
using namespace std;

int main()
{
    float temperature;

    cout << "Enter current temperature (in Celsius): ";
    cin >> temperature;

    if (temperature > 45)
    {
        cout << "ALERT! Temperature is above 45°C. Equipment damage and safety hazard possible.";
    }

    return 0;
}
