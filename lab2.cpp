// Lab #2 C++
// Austin Nguyen

#include <iostream>
using namespace std;

int main()
{
    int grade1, grade2, grade3, grade4;

    cout << "Please enter the first grade: ";
    cin >> grade1;
    
    cout << "Please enter the second grade: ";
    cin >> grade2;
    
    cout << "Please enter the third grade: ";
    cin >> grade3;
    
    cout << "Please enter the fourth grade: ";
    cin >> grade4;
    
    double average = (grade1 + grade2 + grade3 + grade4) / 4.0;
    cout << "The average grade is " << average << endl;
}
