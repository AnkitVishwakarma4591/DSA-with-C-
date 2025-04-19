# include <iostream>
# include <vector>
# include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &nums){
    int n = nums.size();

    for(int i = 0 ; i < n-1 ; i++){
        int smallesIdx = i;
        for(int j = i+1; j < n ;j++){
            if(nums[j] < nums[smallesIdx]){
                smallesIdx = j;
            }
        }
        swap(nums[i],nums[smallesIdx]);
    }
}

void printArray(vector<int> &nums){
    for(int val : nums){
        cout<<val<<" ";
    }
}

int main(){
    vector<int> nums = {4,1,5,2,3};

    selectionSort(nums);
    printArray(nums);

    return 0;
}