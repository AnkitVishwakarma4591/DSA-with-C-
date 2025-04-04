# include <iostream>
# include <vector>
using namespace std;

int binarySearch(vector<int> & nums,int tar){
    int n = nums.size();
    int st = 0, end = n-1;
    while(st <= end){
        int mid = (st+end)/2;
        if(tar > nums[mid]){
            st = mid+1;
        }else if(tar < nums[mid]){
            end = mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> vec2 = {-1,0,3,4,5,9,12};
    int tar = 4;
    cout<<binarySearch(vec2,tar);
}