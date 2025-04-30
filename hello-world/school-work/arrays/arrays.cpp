#include <iostream>
#include <string>
using namespace std;

int main(){
    string locations[6] = {"New York", "Los Angeles", "Chicago", "Houston", "Phoenix", "Philadelphia"};
    string target;
    cout << "Enter a location: ";
    getline(cin, target);

    bool found = false;

    for (int i = 0; i < 6; i++){
        if (locations[i] == target){
            cout << target << " is located at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found){
        cout << "Location not found" << endl;
    }
}