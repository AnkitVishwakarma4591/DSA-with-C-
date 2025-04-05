# include <iostream>
# include <vector>
using namespace std;

int BinarySearch(vector<int> &nums,int tar, int st, int end){
    if(st <= end){
        int mid = st+(end-st)/2;
        if(tar > nums[mid]) return BinarySearch(nums,tar,mid+1,end);
        else if(tar < nums[mid]) return BinarySearch(nums,tar,st,mid-1);
        else return mid;
    }
    return -1;
}

int main(){
    vector<int> nums = {-1,0,3,5,9,12};
    int tar = 20 ;
    int st = 0;
    int end = nums.size()-1;

    cout<<BinarySearch(nums,tar,st,end)<<endl;

    return 0;
}