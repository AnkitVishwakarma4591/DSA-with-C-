# include <bits/stdc++.h>
using namespace std;

// void getPerms(vector<string> &str, vector<vector<string>> &ans, int idx){
//     if(idx == str.size()){
//         ans.push_back({str});
//         return;
//     }

//     for(int i = idx ; i < str.size() ; i++){
//         swap(str[idx], str[i]);
//         getPerms(str,ans,idx+1);

//         swap(str[idx], str[i]);
//     }

// }

void getPerms(vector<string> &str, int idx){
    if(idx == str.size()){
        for(auto val : str){
            cout<<val<<" ";
        }
        return;
    }

    for(int i = idx ; i < str.size() ; i++){
        swap(str[idx], str[i]);
        getPerms(str,idx+1);

        swap(str[idx], str[i]);
    }

}

vector<string> stringPermute(vector<string> &str){
    getPerms(str,0);

    return str;
}

int main(){
    vector<string> str = {"a","b","c"};

    // for(auto val : stringPermute(str)){
    //     for(auto val1 : val){
    //         cout<<val1<<" ";
    //     }
    // }

    stringPermute(str);

    return 0;
}