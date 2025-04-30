#include <iostream>
using namespace std;
// hello


int main(){
    int a = 6;
    int b = 7;

    int *ptr_a = &a;
    int *ptr_b = &b;

    int temp = *ptr_a;
    a = *ptr_b;
    b = temp;

    cout << "a: " << a << endl
        << "b: " << b << endl;

    return 0;
}