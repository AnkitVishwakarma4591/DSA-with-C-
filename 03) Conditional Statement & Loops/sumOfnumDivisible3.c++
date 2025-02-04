# include <iostream>
using namespace std;

int main(){ 
    int n;
    int sum = 0;

    cout<<"Enter number : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i%3 == 0){
            sum+=i;
        }
        
    }
    cout<<"Sum of number = "<<sum<<endl;
    return 0;
} 