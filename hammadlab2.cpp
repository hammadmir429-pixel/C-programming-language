#include <iostream>
using namespace std;

int main() {

    string name, roll, dept;
    
    int eng, math, phy;

    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Roll Number: ";
    getline(cin, roll);
    cout << "Enter Department: ";
    getline(cin, dept);

    cout << "Enter marks in English: ";
    cin >> eng;

    cout << "Enter marks in Math: ";
    cin >> math;

    cout << "Enter marks in Physics: ";
    cin >> phy;

    int total = eng + math + phy;
    float percentage = (total / 300.0) * 100;

    cout << "\n------------------------------\n";
    cout << "\tSTUDENT RESULT CARD\n";
    cout << "------------------------------\n\n";

    cout << "Name:\t\t" << name << endl;
    cout << "Roll No:\t" << roll << endl;
    cout << "Department:\t" << dept << endl;

    cout << "\nSubject\t\tMarks\n";
    cout << "English\t\t" << eng << endl;
    cout << "Math\t\t" << math << endl;
    cout << "Physics\t\t" << phy << endl;

    cout << "\nTotal Marks:\t" << total << "/300" << endl;
    cout << "Percentage:\t" << percentage << "%" << endl;

    cout << "\nGrade:\t\t";

    if (percentage >= 85) cout << "A+";
    else if (percentage >= 70) cout << "A";
    else if (percentage >= 60) cout << "B";
    else if (percentage >= 50) cout << "C";
    else cout << "Fail";

    cout << "\n\nCongratulations " << name << "!\n";

    return 0;
}