# include<iostream>
using namespace std;

int main(){
    int arr[5];
    int sz = sizeof(arr)/sizeof(int);
    cout<<sz<<endl;

    cout<<"Enter number with space : ";
    for(int i=0;i<sz;i++){
        cin>>arr[i];
    }

    for(int i=0;i<sz;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}