# include <iostream>
# include <vector>
# include <map>
using namespace std;

int main(){
    multimap<string,int> m;

    m.insert({"tv",50});
    m.emplace("laptop",100);
    m.emplace("laptop",100);
    m.emplace("laptop",100);
    m.emplace("laptop",100);

    // m.erase("laptop"); 
    m.erase(m.find("laptop")); 

    m.insert({"camera",25});
    m.emplace("charger",70);

    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}