# include <iostream>
# include <vector>
using namespace std;

class Stack{
    vector<int> v;

    public:

    void push(int val){
        v.push_back(val);
    }

    void pop(){
        v.pop_back();
    }

    int Top(){
        return v[v.size()-1];
    }

    bool empty(){
        return v.size() == 0;
    }
};

int main(){
    Stack S1;
    S1.push(10);
    S1.push(20);
    S1.push(30);

    S1.pop();

    while(!S1.empty()){
        cout<<S1.Top()<<" ";
        S1.pop();
    }

    return 0;
}