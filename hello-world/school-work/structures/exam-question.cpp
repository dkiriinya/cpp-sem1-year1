#include <iostream>
using namespace std;

struct worker {
    string name;
    int age;
    double salary;
    string department;
};

worker GetWorkerData(){
    worker A;
    cout << "Enter the following details about the worker ";
    cout << "\nName: ";
    cin >> A.name;
    cout << "Age: ";
    cin >> A.age;
    cout << "Salary: ";
    cin >> A.salary;
    cout << "Department: ";
    cin >> A.department;

    return A;
}
void DispayWorkerData(worker Worker){
    cout << "\nThe following are details about " << Worker.name << ": ";
    cout << "\nAge: " << Worker.age;
    cout << "\nSalary: " << Worker.salary;
    cout << "\nDepartment: " << Worker.department;
}
int main(){
    worker A;
    A = GetWorkerData();
    DispayWorkerData(A);

    return 0;

}