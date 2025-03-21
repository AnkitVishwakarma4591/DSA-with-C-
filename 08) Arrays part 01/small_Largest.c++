# include<iostream>
using namespace std;

int main(){
    int arr[5];
    int sz = sizeof(arr)/sizeof(int);


    int largest = INT8_MIN;
    int smallest = INT8_MAX;
    cout<<"Enter number with space : ";
    for(int i=0;i<sz;i++){
        cin>>arr[i];
    }

    // for(int i=0;i<sz;i++){
    //     if(arr[i] > largest){
    //         largest = arr[i];
    //     }else if(arr[i] < smallest){
    //         smallest = arr[i];
    //     }
    // }

    for(int i=0;i<sz;i++){
        smallest = min(arr[i],smallest);
        largest = max(arr[i],largest);
    }
    cout<<"Largest is : "<<largest<<endl;
    cout<<"Smallest is : "<<smallest<<endl;

    return 0;
}