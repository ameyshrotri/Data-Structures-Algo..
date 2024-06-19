#include<iostream>
#include<queue>
using namespace std;
int main(){
    // max heap 
    priority_queue<int> maxi;

    //min heap
    priority_queue<int, vector<int>, greater<int>>mini;

    //returning maxi
    maxi.push(23);
    maxi.push(54);
    maxi.push(1);
    maxi.push(9);
    maxi.push(10);
    cout<<maxi.size()<<endl;
    int n =maxi.size();
   for(int i = 0;i < n;i++){
    cout<<maxi.top()<<" ";
    maxi.pop();
   } cout<<endl;



//Returning mini
    mini.push(23);
    mini.push(54);
    mini.push(1);
    mini.push(9);
    mini.push(10);
    int m =mini.size();
    for(int i = 0;i < m;i++){
    cout<<mini.top()<<" ";
    mini.pop();
   } cout<<endl;

//output should 1 cause its empty;
   cout<<endl<<mini.empty();
   cout<<endl<<maxi.empty();

    return 0;

}