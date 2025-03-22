// WAF to print intersection of 2 arrays.

# include<bits/stdc++.h>
using namespace std;

void takeInput(int arr[] , int s){
    int i=0;
    while(i<s){
        cout<<"Enter index values "<<i<<" : ";
        cin>>arr[i];
        i++;
    }
    cout<<endl;
}

void intersectionArray(int arr1[],int arr2[],int s){
    cout << "Intersection of two arrays " << endl;

    for(int i=0;i<s;i++){
        bool iscomman = false;
        
        for(int j=0;j<s;j++){
            if(arr1[i] == arr2[j]){
                iscomman = true;
                break;
            }
        }
        if(iscomman){
            cout<<arr1[i]<<" ";
        }
    }
}

int main(){
    int s;
    cout<<"Enter size of an Array : ";
    cin>>s;
    int arr1[s];
    int arr2[s];
    cout<<"Enter Elements in Array 1 "<<endl;
    takeInput(arr1,s);
    cout<<"Enter Elements in Array 2 "<<endl;
    takeInput(arr2,s);
    intersectionArray(arr1,arr2,s);

    return 0;
}