#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i =0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i = 0;i<n; i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
int arr[] = {10,1,7,6,14,9};
int n = 6;
bubblesort(arr,n);
return 0;
}