# include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec;

    vec.push_back(25);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    vec.push_back(22);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    vec.push_back(21);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    vec.push_back(12);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    vec.push_back(15);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    return 0;
}