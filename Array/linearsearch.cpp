// linear search


#include<iostream>
using namespace std;
int linearsearch(int arr[], int n, int k){
    for(int i = 0; i<n; i++){
        if(arr[i]== k){
            cout<<i;
            break;
        }
    }
}
int main(){
    int arr[ ] = {1,2,3,4,5,6,7,4};
    int n = 8;
    int k = 4;
    linearsearch(arr,n,k);
    return 0;

}