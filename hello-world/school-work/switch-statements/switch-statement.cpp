#include <iostream>
using namespace std;

int option,balance,deposit,withdraw;
int main(){
    balance = 1000;

    cout<<"Welcome to Goliath National Bank. Please select an option from the menu below.\n" 
        <<"'1' to check balance. \n"
        <<"'2' to deposit money. \n"
        <<"'3' to withdraw money. \n"
        <<"'4' to exit. \n"
        <<"\nKindly type in your option: ";

    cin >> option;
    switch (option)
    {
    case 1:
        cout<< "\nYour balance is: " << balance <<"\nThank you for banking with us!";
        break;

    case 2:
        cout<< "\nHow much would you like to deposit?: ";
        cin >> deposit;
        if (deposit < 0)
        {
            cout << "You cannot deposit a negative amount. Your current balance is: " << balance;
        }
        balance = balance + deposit;
        cout << "Withdraw Sucessful. Your new balance is: " << balance;
        break;

    case 3:
        cout<< "\nHow much would you like to withdraw?: ";
        cin >> withdraw;
        if (withdraw > balance)
        {
            cout << "You do not have enough money to withdraw. Your current balance is: " << balance;
        }
        else
        {
            balance = balance - withdraw;
            cout << "Your new balance is: " << balance;
        }
        break;
    case 4:
        cout<< "\nThank you for banking with us. Have a nice day!";
        break;
    

    default:
        cout<< "\nInvalid option. Please try again.";
        break;
    }
    cout<< "\n\n";
    return 0;
}