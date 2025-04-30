// Define a Car structure with brand, model, and year.
// Store details of 5 cars in an array and display them.
#include <iostream>
using namespace std;

struct Car {
    string brand;
    string model;
    int year;
};

Car getCar();
void displayCar(Car);

int main(){
    Car cars[5] = {};
    for(int i=0 ; i<5 ; i++){
        cars[i] = getCar();
    };
    for(int i=0 ; i<5 ; i++){
        displayCar(cars[i]);
    }
    return 0;
}

Car getCar(){
    Car car;

    cout << "\nEnter the car brand: ";
    cin >> car.brand;

    cout << "Enter the car model: ";
    cin >> car.model;

    cout << "Enter the year the car was produced: ";
    cin >> car.year;

    return car;
}

void displayCar(Car car){
    cout << "\nCar Brand: " << car.brand << endl;
    cout << "Car Model: " << car.model << endl;
    cout << "Car Production Year: " << car.year << endl;
}

