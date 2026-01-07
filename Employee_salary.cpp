#include <iostream>
using namespace std;

int main()
{
    int jobLevel, experience;
    char remote;
    
    float basicSalary = 0;
    float experienceBonus = 0;
    float remoteBonus = 0;
    float grossSalary = 0;
    float tax = 0;
    float finalSalary = 0;

    cout << "Enter Job Level (1-4): ";
    cin >> job_Level;

    cout << "Enter Years of Experience: ";
    cin >> experience;

    cout << "Working in Remote Area? (y/n): ";
    cin >> remote;

    switch (job_Level)
    {
        case 1:
            basicSalary = 120000;
            break;
        case 2:
            basicSalary = 85000;
            break;
        case 3:
            basicSalary = 60000;
            break;
        case 4:
            basicSalary = 40000;
            break;
        default:
            cout << "Invalid Job Level";
            return 0;
    }

    // Expeerience Bonus Calculation
    if (experience >= 15)
        experienceBonus = basicSalary * 0.25;
    else if (experience >= 10)
        experienceBonus = basicSalary * 0.15;
    else if (experience >= 5)
        experienceBonus = basicSalary * 0.10;
    else
        experienceBonus = 0;

    // Bonus for Remote Area
    if (remote == 'y' || remote == 'Y')
        remoteBonus = basicSalary * 0.08;

    // Grosss Salaryy
    grossSalary = basicSalary + experienceBonus + remoteBonus;

    // Tax Calculation
    if (grossSalary >= 150000)
        tax = grossSalary * 0.30;
    else if (grossSalary >= 100000)
        tax = grossSalary * 0.20;
    else if (grossSalary >= 60000)
        tax = grossSalary * 0.10;
    else
        tax = 0;

    // Final Salary
    finalSalary = grossSalary - tax;

    // now All outputs
    cout << "\n----- All Salary Details -----\n";
    cout << "Basic Salary: " << basicSalary << endl;
    cout << "Experience Bonus: " << experienceBonus << endl;
    cout << "Remote Bonus: " << remoteBonus << endl;
    cout << "Gross Salary: " << grossSalary << endl;
    cout << "Tax Deduction: " << tax << endl;
    cout << "Final Salary: " << finalSalary << endl;

    return 0;
}
