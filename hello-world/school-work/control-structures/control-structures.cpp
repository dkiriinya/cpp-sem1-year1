#include <iostream>
#include <ctime>
using namespace std;

int num;
bool tired;
int main(){
    cout<<"Enter a num: ";
    cin>>num;
    if(num > 7){
        cout<<"Son of a gun. you did it!"<<endl;
    }
    else{
        cout<<"You missed. keep trying"<<endl;
    };
    return 0;
}

