# include <iostream>
# include <vector>
# include <map>
using namespace std;

int main(){
    map<string,int> m;

    m["tv"] = 50;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tables"] = 120;
    m["watch"] = 50;

    m.erase("tv"); 

    m.insert({"camera",25});
    m.emplace("charger",70);

    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<"Count : "<<m.count("laptop")<<endl;

    if(m.find("camera") != m.end()){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}