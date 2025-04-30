#include <iostream>
using namespace std;

int main(){
    int time;
    cout << "What time is it: ";
    cin >> time;
    switch (time / 10){
        case 0:
            cout << "Good Morning";
            break;
        case 1:
            cout << "Good day";
            break;
        default:
            cout << "Good evening";
            break;
    }
}