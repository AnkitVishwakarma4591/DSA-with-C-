# include <iostream>
using namespace std;

int main(){ 
    int marks;
    cout<<"Enter your marks : ";
    cin>>marks;

    char grade;
    if(marks >= 90){
        grade = 'A';
    }
    else if(marks >= 80 && marks < 90){
        grade = 'B';
    }
    else{
        grade = 'C';
    }

    cout<<"Your grade is : "<<grade<<endl;

    return 0;
} 