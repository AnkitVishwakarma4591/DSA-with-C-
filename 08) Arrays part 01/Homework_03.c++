// WAF to print all the Unique values in an array.

# include <bits/stdc++.h>
using namespace std;

void takeInput(int arr[] , int s){
    int i=0;
    while(i<s){
        cout<<"Enter index values "<<i<<" : ";
        cin>>arr[i];
        i++;
    }
}

void returnUnique(int arr[],int s){
    cout << "Unique values in the array are: " << endl;

    for(int i=0;i<s;i++){
        bool isunique = true;
        
        for(int j=0;j<s;j++){
            if(i!=j && arr[i] == arr[j]){
                isunique = false;
                break;
            }
        }
        if(isunique){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int s;
    cout<<"Enter size of an Array : ";
    cin>>s;
    int arr[s];
    takeInput(arr,s);
    returnUnique(arr,s);


    return 0;
}