# include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[] , int sz, int target){
    for(int i=0 ; i<sz ; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {2,4,6,7,8,9,10};
    int sz = sizeof(arr);
    int target = 9;

    cout<<linearSearch(arr,sz,target)<<endl;
    return 0;
}

