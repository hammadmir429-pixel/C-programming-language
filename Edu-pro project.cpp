 #include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
int days, hoursPerDay;
int choice, chapters;
char quizChoice, again;
string name,rollNo;

cout << "EduPlanner Pro – Smart Study & Quiz System\n\n";
cout << "Enter Student Name: ";
getline(cin, name);

cout << "Enter Roll Number: ";
getline(cin, rollNo);

cout << "\nEnter days left until exam: ";
cin >> days;

cout << "Enter study hours per day: ";
cin >> hoursPerDay;

cout << "\nSelect Subject:\n";
cout << "1. Programming Fundamentals\n";
cout << "2. ICT\n";
cout << "3. Functional English\n";
cout << "4. Pakistan Studies\n";
cout << "5. Calculus & Geometry\n";
cout << "6. Applied Physics\n";

cout << "\nEnter your choice (1-6): ";
cin >> choice;

cout << "Enter total chapters of selected subject: ";
cin >> chapters;

if(chapters <=0){
cout << "Invalid chapters input.\n";
return 0;
}

int totalHours = days * hoursPerDay;
float hoursPerChapter = (float)totalHours / chapters;
float daysPerChapter  = (float)days / chapters;

cout << fixed << setprecision(2);
cout << "\n Study Progress Plan\n";
cout << "----------------------\n";
cout << "Student Name     : " << name << endl;
cout << "Roll Number      : " << rollNo << endl;
cout << "Total Study Days : " << days << endl;
cout << "Total Study Hours: " << totalHours << " hours\n";
cout << "Chapters to Study: " << chapters << endl;

int roundedDays = (int)ceil(daysPerChapter);
cout << "\n Recommended Plan:\n";
cout << "You should spend approximately " << roundedDays <<" days"<< " and " << hoursPerChapter << " hours on each chapter to complete your syllabus on time.\n";

cout << "\nDo you want to attempt a preparation quiz? (Y/N): ";
cin >> quizChoice;

if (quizChoice == 'Y' || quizChoice == 'y')
{
do
{

cout << "\nQuiz Section\n";    
cout << "----------------------\n";

cout << "\nSelect Subject for Quiz:\n";
cout << "1. Programming Fundamentals\n";
cout << "2. ICT\n";
cout << "3. Functional English\n";
cout << "4. Pakistan Studies\n";
cout << "5. Calculus & Geometry\n";
cout << "6. Applied Physics\n";

cout << "\nEnter your choice (1-6): ";    
cin >> choice;    

switch (choice) {    

case 1:    
    cout << "Programming Fundamentals Quiz:\n";    
    cout << "1. Write a program using loop and if-else statement.\n";    
    cout << "2. Write a program using switch statement.\n";    
    break;    

case 2:    
    cout << "ICT Quiz:\n";    
    cout << "1. Make an assignment in MS Word on pollution in Pakistan.\n";    
    cout << "2. Create an Excel sheet showing result of 5 students.\n";    
    break;    

case 3:    
    cout << "Functional English Quiz:\n";    
    cout << "1. Write 5 sentences using tenses.\n";    
    cout << "2. Write sentences using conditional, direct/indirect, and active/passive voice.\n";    
    break;    

case 4:    
    cout << "Pakistan Studies Quiz:\n";    
    cout << "1. Write about Two Nation Theory in your own words.\n";    
    cout << "2. Discuss creation of Pakistan and Kashmir issue.\n";    
    break;    

case 5:    
    cout << "Calculus & Geometry Quiz:\n";    
    cout << "1. Solve questions related to absolute value.\n";    
    cout << "2. Solve basic derivative problems.\n";    
    break;    

case 6:    
    cout << "Applied Physics Quiz:\n";    
    cout << "1. Explain simple pendulum.\n";    
    cout << "2. Define Gauss's Law.\n";    
    break;    

default:    
    cout << "Invalid subject selection.\n";    
}

cout << "\nDo you want to attempt another quiz? (Y/N): ";
cin >> again;
} while (again == 'Y' || again == 'y');
}

cout << "\n Keep it up Practice Makes a Man Perfect \n";

return 0;

}
