#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    float grade;
};

Student insertData(Student);
void displayData(Student);

int main(){
    Student s1;
    s1 = insertData(s1);
    displayData(s1);    
    return 0;
}

void displayData(Student s){
    cout << "Student name: " << s.name << endl;
    cout << "Student age: " << s.age << endl;
    cout << "Student grade: " << s.grade << endl;
}

Student insertData(Student s){
    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "Enter student age: ";
    cin >> s.age;

    cout << "Enter student grade: ";
    cin >> s.grade;

    return s;
}