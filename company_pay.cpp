#include <iostream>
using namespace std;

int main()
{
    float salary, new_Salary;
    int years;

    cout << "Enter current salary of Employee: ";
    cin >> salary;

    cout << "Enter years of service of Employee: ";
    cin >> years;

    if (years >= 3)
    {
        if (years >= 10)
        {
            new_Salary = salary + (salary * 0.20);
        }
        else if (years >= 5)
        {
            new_Salary = salary + (salary * 0.10);
        }
        else
        {
            new_Salary = salary + (salary * 0.05);
        }
    }
    else
    {
        new_Salary = salary;   // it means employeee have no bonus
    }

    cout << "Updated Salary: " << new_Salary;

    return 0;
}
