#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, string> m;
    m[1] = "amey";
    m[2] = "ram";
    m[13] = "kumar";

    m.insert({5,"bheem"});
    // for(auto i : m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    // cout<<m.count(13);

    m.erase(13);

    // cout<<m.count(13);

    auto it = m.find(5);

    for(auto i=it;i != m.end(); i++){
        cout<<(*i).first<<endl;
    }
}