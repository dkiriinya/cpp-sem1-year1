#include <iostream>
using namespace std;

int main(){
    int gradeCounter; 
    gradeCounter = 1; 
    int total; 
    int grade; 
    int average; 
    total = 0; 

    for(gradeCounter=1; gradeCounter<=10 ; gradeCounter++){
        cout << "Enter grade: ";
        cin >> grade;
        total = total + grade;
    }
    average = total / 10;
    cout << "\nTotal of all 10 grades is: " << total << endl;
    cout << "Class average is: " << average << endl;

}