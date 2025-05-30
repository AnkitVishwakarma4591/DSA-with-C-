# include <bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr, int st, int mid, int end){ //O(n)
    vector<int> temp;

    int i = st , j = mid + 1;
    int invCount = 0;

    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){       // to sort in decending order change condition >=  
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
            invCount += (mid-i+1);
        }
    }

    while(i <= mid){
        temp.push_back(arr[i++]);
    }

    while(j <= end){
        temp.push_back(arr[j++]);
    }

    for(int idx = 0 ; idx < temp.size() ; idx++){
        arr[idx+st] = temp[idx];
    }

    return invCount;
}

int mergeSort(vector<int> &arr, int st , int end){
    if(st < end){
        int mid = st + (end-st)/2;

        // left half
        int leftInvCount = mergeSort(arr,st,mid);

        // right half
        int rightInvCount = mergeSort(arr,mid+1,end);

        int invCount = merge(arr,st,mid,end);

        return leftInvCount + rightInvCount + invCount;
    }

    return 0;
}

int main(){
    vector<int> arr = {6,3,5,2,7};
    int ans = mergeSort(arr,0,arr.size()-1);

    cout<<"inv Count :"<<ans<<endl;
    return 0;
}