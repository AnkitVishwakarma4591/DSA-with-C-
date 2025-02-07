# include <iostream>
using namespace std;

int fibonacci(int n){
    int first = 0;
    int second = 1;
    cout<<first<<" ";
    cout<<second<<" ";
    for(int i=2;i<=n;i++){
        int next = first + second;
        cout<<next<<" ";

        first = second;
        second = next;

    }
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    fibonacci(num);
    
    return 0; 
}