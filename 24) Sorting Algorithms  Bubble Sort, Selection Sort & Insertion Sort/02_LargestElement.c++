# include <iostream>
# include <bits/stdc++.h>
using namespace std;

int largestElement(int arr[] ,int n){
    int max = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i] > arr[i+1]){
            max = arr[i];
        }
    }

    return max;
}
int main(){
    int arr[] = {3,2,1,5,2};
    int n  = sizeof(arr)/sizeof(arr[0]);

    cout<<largestElement(arr,n)<<endl;

    return 0;
}