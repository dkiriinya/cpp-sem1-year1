#include <iostream>

using namespace std;

bool tired;
int main(){
    cout<<"Are you tired? 0 for no and 1 for yes: ";
    cin>>tired;
    if(tired){
        cout<<"I'm tired. Im not going to exerice."<<endl;
    }
    else{
        cout<<"I'm not tired. I'm going to exercise."<<endl;
    };
    return 0;
}

