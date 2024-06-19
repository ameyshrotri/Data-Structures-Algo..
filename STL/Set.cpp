#include<iostream>
#include<set>
using namespace std;
int main(){
// no duplicates
set<int>s;
s.insert(1);
s.insert(1);
s.insert(3);
s.insert(4);
// for(int i: s){
//     cout<<i;
// }
// s.erase(s.begin());

cout<<s.count(1);

return 0;
}