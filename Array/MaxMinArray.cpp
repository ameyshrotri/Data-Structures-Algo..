#include<iostream>
using namespace std;
int minmax(int arr[], int len){
    int max = arr[0], min;
    for (int i = 1; i < len; i++)
    {
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout<<max;
    return 0;
    
}
int main(){
int arr[] = {43,1,5,12,4};
int len  = 5;
minmax(arr,len);
    return 0;
}