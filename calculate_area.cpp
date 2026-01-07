#include <iostream>
using namespace std;

int main()
{
    int choice;
    float area;

    cout << "Select Shape to Calculate Area:\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1: //For Circle
        {
            float radius;
            cout << "Enter radius of the circle: ";
            cin >> radius;
            area = 3.42 * radius * radius;
            cout << "Area of Circle: " << area << endl;
            break;
        }

        case 2: //For Rectangle
        {
            float length, width;
            cout << "Enter length of the rectangle: ";
            cin >> length;
            cout << "Enter width of the rectangle: ";
            cin >> width;
            area = length * width;
            cout << "Area of Rectangle: " << area << endl;
            break;
        }

        case 3: //for Triangle
        {
            float base, height;
            cout << "Enter base of the triangle: ";
            cin >> base;
            cout << "Enter height of the triangle: ";
            cin >> height;
            area = 0.5 * base * height;
            cout << "Area of Triangle: " << area << endl;
            break;
        }

        default:
            cout << "Invalid choice! Please select 1, 2, or 3." << endl;
    }

    return 0;
}
