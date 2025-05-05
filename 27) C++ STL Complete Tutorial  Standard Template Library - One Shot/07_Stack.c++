# include <iostream>
# include <vector>
# include <stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    stack<int> s2;
    s2.swap(s);
    // while(!s.empty()){
    //     cout<<s.top()<<endl;
    //     s.pop();
    // }
    cout<<"Size of s :"<<s.size()<<endl;
    cout<<"Size of s2 :"<<s2.size()<<endl;
    return 0;
}