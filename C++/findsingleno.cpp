#include<iostream>
using namespace std;



int singleelement(int arr[],int n){
    for(int i= 0; i<n; i++){
        int num = arr[i];
        int cnt = 0;
        for(int j = 0; j<n;j++){
            if(arr[j] == num){
                cnt ++;
            }
        }
        if(cnt == 1){
            cout<<arr[i];
        }
    }

}
int main(){
    int arr[] = {1,2,1,2,3};
    int n = 5;
    singleelement(arr,n);
    return 0;
}