#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d; 
    d.push_back(1);
    d.push_front(2);
    
    d.pop_back();
    d.pop_front();
    for(int i: d){
        cout<<endl<<i<<endl;
    }

    cout<<d.at(1);

    d.front(); //front
    d.back();  //back
    d.empty(); //empty
    d.erase(d.begin()+1); // remove 1st element
    d.size(); 
    return 0;
}