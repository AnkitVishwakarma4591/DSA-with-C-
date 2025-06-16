# include <iostream>
# include <vector>
# include <stack>
using namespace std;

vector<int> previousSmallerElement(vector<int> &arr){
    int n = arr.size();
    stack<int> s;
    vector<int> ans(n,0);

    for(int i = 0 ; i < n ; i++){
        while(s.size() > 0 && s.top() >= arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = s.top();
        }

        s.push(arr[i]);
    }

    return ans;
}

int main(){

    vector<int> arr = {3, 1, 0, 8, 6};
    
    for(int val : previousSmallerElement(arr)){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}