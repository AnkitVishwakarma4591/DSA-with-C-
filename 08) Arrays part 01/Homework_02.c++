// WAF to swap the max & min number of an array.

# include <bits/stdc++.h>
using namespace std;

int MaxNum(int arr[],int s){
    int Max = INT_MIN;
    int i = 0;
    while(i<s){
        if(arr[i]>Max){
            Max = arr[i];
        }
        i++;
    }
    return Max;
}

int MinNum(int arr[],int s){
    int Min = INT_MAX;
    int i = 0;
    while(i<s){
        if(arr[i]<Min){
            Min = arr[i];
        }
        i++;
    }
    return Min;
}
void MinMaxSwap(int arr[],int s,int max,int min){
    for(int i=0; i<s;i++){
        if(arr[i] == max){
            arr[i] =min;
        }else if(arr[i] == min){
            arr[i] = max;
        }
    }
}

int main(){
    int arr[] = {5,6,8,9,7,2,3,10};
    int s = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before swaping Max with min array is :  "<<endl;
    int i = 0;
    while(i<s){
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<endl;
    int max = MaxNum(arr,s);
    int min = MinNum(arr,s);

    MinMaxSwap(arr,s,max,min);
    cout<<"After swaping Max with min array is :  "<<endl;
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }

    // cout<<"The Highest Number in Array : "<<MaxNum(arr,s)<<endl;
    // cout<<"The Lowest Number in Array : "<<MinNum(arr,s)<<endl;

    return 0;
}