#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
   
    cout<<s.top()<<endl;
     s.pop();
    cout<<s.top()<<endl;
    s.size();
    s.empty();
    
}