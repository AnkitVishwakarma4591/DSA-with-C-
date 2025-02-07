# include <iostream>
using namespace std;

int digit_sum(int num){
    int digsum = 0;
    while(num > 0){
        int lastdig = num%10;
        num /=10;
        digsum+=lastdig;
    }

    return digsum;
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    cout<<"Sum of Digits = "<<digit_sum(num)<<endl;
    
    return 0; 
}