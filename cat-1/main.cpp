#include <iostream>
using namespace std;

int num1,num2,subtracted_value;
int main()
{
    cout<<"Enter first value. This will subtract the second value: ";
    cin>>num1;
    cout<<"Enter second value: ";
    cin>>num2;
    subtracted_value=num1-num2;
    cout<<"\nThe subtracted value is: "<<subtracted_value;
    return 0;
}
