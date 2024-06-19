#include<iostream>
#include<list>
using namespace std;


int main(){
    list<int> l;
    list<int> m(l);
    list<int> n(5,100);
    l.push_back(1);
    l.push_back(2);
    for(int i : l){
        cout<<i<<endl;
    }
    l.begin();
    l.end();
    l.erase(l.begin());
    l.size();
    l.pop_back();
    l.pop_front();
    return 0;
}