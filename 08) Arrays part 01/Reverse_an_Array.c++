# include <bits/stdc++.h>
using namespace std;

void ReverseArray(int arr[] , int sz){
    for(int i=0;i< sz/2;i++){
        swap(arr[i] ,arr[sz-i-1]);
    }
    
}
void print(int arr[],int sz){
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {2,4,6,7,8,9};
    int sz = sizeof(arr) / sizeof(arr[0]);

    ReverseArray(arr,sz);
    print(arr,sz);

    return 0;
}


// // for Even size Array
// # include <bits/stdc++.h>
// using namespace std;

// void ReverseArray(int arr[] , int sz){
//     int start = 0, end = sz-1;
//     while(start < end ){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
    
// }
// void print(int arr[],int sz){
//     for(int i=0;i<sz;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[] = {2,4,6,7,8,9};
//     int sz = sizeof(arr) / sizeof(arr[0]);

//     ReverseArray(arr,sz);
//     print(arr,sz);

//     return 0;
// }



// for Odd size Array
// # include <bits/stdc++.h>
// using namespace std;

// void ReverseArray(int arr[] , int sz){
//     int start = 0, end = sz-1;
//     while(start <= end ){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
    
// }
// void print(int arr[],int sz){
//     for(int i=0;i<sz;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[] = {2,4,6,7,8,9,10};
//     int sz = sizeof(arr) / sizeof(arr[0]);

//     ReverseArray(arr,sz);
//     print(arr,sz);

//     return 0;
// }
