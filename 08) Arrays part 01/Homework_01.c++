// WAP to calculate sum & Product of all numbers in an array;

# include <bits/stdc++.h>
using namespace std;

void TakeInput(int arr[],int sz){
    int i=0;
    while(i<sz){
        cout<<"Enter index values "<<i<<" : ";
        cin>>arr[i];
        i++;
    }
}

int CalculateSum(int arr[],int sz){
    int sum = 0;
    int i=0;
    while(i<sz){
        sum+=arr[i];
        i++;
    }
    return sum;

}
int CalculatePro(int arr[],int sz){
    int Pro = 1;
    int i=0;
    while(i<sz){
        Pro*=arr[i];
        i++;
    }
    return Pro;
}

int main(){
    int sz;
    cout<<"Enter Size of an Array : ";
    cin>>sz;
    int arr[sz];
    TakeInput(arr,sz);
    cout<<"The Sum of all Element of an Array : "<<CalculateSum(arr,sz)<<endl;
    cout<<"The Product of all Element of an Array : "<<CalculatePro(arr,sz)<<endl;

    return 0;
}
