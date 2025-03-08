#include <iostream>

using namespace std; 

string day;
char D;
int main(){
    cout<<"What day is it today:";
    cin>>day;
    day = "Tuesday";
    D = 'd';

    if (day == "Monday" || day=="Wednesday"){
        cout<<"Today is Chest,Triceps and Shouders day";
    }
    else if (day == "Tuesday" || day == "Saturday"){
        cout<<"Today is Back and Biceps day";
    }
    else if (day == "Friday"){
        cout<<"Today is Legs day";
    }
    else{
        cout<<"Today is Rest day";
    }
    cout << "This statement is always executed because it's outside the nested if...else statement." << endl;
    return 0;
}