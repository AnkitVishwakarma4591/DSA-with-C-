# include <iostream>
using namespace std;

int N_num_Sum(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int sum = N_num_Sum(n);

    cout<<"Sum of numbers : "<<sum<<endl;
    
    return 0;
}