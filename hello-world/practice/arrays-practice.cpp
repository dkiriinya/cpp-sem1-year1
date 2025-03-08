#include <iostream>
#include <vector>
using namespace std;

int sum_and_average(){
    int nums[] = {1,3,4,5,7};
    int sum = 0;
 
    for(int i = 0; i<5 ; i++){
        cout << "Enter a number: ";
        cin >> nums[i];
    }
    for (int num: nums){
        sum += num;
    }
    int length = sizeof(nums)/sizeof(nums[0]);
    float average = sum/length;

    cout << "The sum of the numbers is: " << sum
         << "\nThe average of the numbers is: " << average;
    
    return 0;
}

int reverse_array(){
    int nums[6] = {1,2,3,4,5,6};
    vector<int>reversed_nums;

    for(int i=5 ; i>= 0 ; i--){
        cout<< nums[i];
        reversed_nums.push_back(nums[i]);
    }
    
    cout << "Reversed Nums Array: ";
    cout << "{";
    for (int num:reversed_nums){
        cout << num << ",";
    }
    cout << "}";
    return 0;
    
}

int max_and_min(){
    int nums[] = {1,5,9,8,4,7};
    int max = nums[0];
    int min = nums[0];

    for (int num:nums){
        if(num>max){
            max = num;
        }
        else if(num<min){
            min = num;
        }
    }
    cout << "min: " << min 
         << "\nmax: " << max  ;
    return 0;
}

int find(int target){
    bool found = false;
    int array[6] = {1,4,5,6,8};
    for(int i=0;i<6;i++){
        if (target == array[i]){
            found = true;
            cout << target << " found in location: " << i ;
            break;
        }
    }
    if(!found){
        cout << target << " not found";
    }
    return 0;
}

int main(){
//    sum_and_average();
//    max_and_min();
    // reverse_array();
    int target;
    cout << "Enter a number: ";
    cin >> target;
    find(target);
}