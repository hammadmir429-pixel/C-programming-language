#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    cout << "The number " << num << " is " 
         << ((num % 2 == 0) ? "even" : "odd") << endl;    /*(?) called conditional operator used instead of if-elsee*/ 


    return 0;
}
