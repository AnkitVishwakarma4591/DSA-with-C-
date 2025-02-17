# include<iostream>
using namespace std;

int main(){
    int arr[5];
    int sz = sizeof(arr)/sizeof(int);


    int largest = 0;
    int smallest = INT8_MAX;
    cout<<"Enter number with space : ";
    for(int i=0;i<sz;i++){
        cin>>arr[i];
    }

    for(int i=0;i<sz;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }else if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    // for(int i=0;i<sz;i++){
    //     if(arr[i] < smallest){
    //         smallest = arr[i];
    //     }
    // }
    cout<<largest<<endl;
    cout<<smallest<<endl;

    return 0;
}