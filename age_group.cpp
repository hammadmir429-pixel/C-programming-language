#include <iostream>
using namespace std;

int main() 
{
    int age;

    cout << "Enter age: ";
    cin >> age;

    // Using logical operators + single ternary operator
    string category = 
        (age < 13) ? "Child" :(age <= 19) ? "Teenager" : "Adult";

    cout << "Age " << age << " falls under the category: " << category;

    return 0;
}

