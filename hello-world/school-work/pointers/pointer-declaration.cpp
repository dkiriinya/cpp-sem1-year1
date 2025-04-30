#include <iostream>
using namespace std;

int main(){
    int value = 5;
    int *ptr = &value;
    cout << value << endl;
    cout << *ptr; 

    return 0;
}