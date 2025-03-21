#include <iostream>
# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter length of Array :";
    cin >> n;
    int arr[n];
    int sz = sizeof(arr) / sizeof(int);

    int largest = INT8_MIN;
    int smallest = INT8_MAX;
    cout << "Enter number with space : ";
    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < sz; i++)
    {
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }

    for(int i=0;i<sz;i++){
        if(arr[i] == smallest){
            cout<<"smallest number at index : "<<i<<endl;
        }else if(arr[i] == largest){
            cout<<"largest number at index : "<<i<<endl;
        }
    }
    cout << "Largest is : " << largest << endl;
    cout << "Smallest is : " << smallest << endl;

    return 0;
}