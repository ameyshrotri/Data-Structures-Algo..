#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<int> a = {1,2,3,4,5};
    cout<<"size"<<a.capacity()<<endl;
    a.push_back(1); // append at last

    vector<int> L(5,1); // size 5 initialize with 1
    for(int i:L){
        // cout<<i<<endl;
    }

    vector<int> Last(L);
     for(int i:Last){
        cout<<i<<endl;
    }
     

    a.pop_back(); //remove last

    a.at(1); // position

    a.front(); //front

    a.back(); //back

    a.clear(); //clear

    return 0;

}