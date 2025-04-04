# include <iostream>
# include <vector>
using namespace std;

int search(vector<int> &nums, int target){
    int n = nums.size();
    int st = 0 , end = n-1;

    while(st <= end){
        int mid = st+(end-st)/2;

        if(target > nums[mid]){
            st = mid+1;
        }
        else if(target < nums[mid]){
            end = mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;

    cout<<search(nums,target)<<endl;

    return 0;
}