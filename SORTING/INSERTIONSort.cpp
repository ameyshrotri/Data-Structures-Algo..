#include<iostream>
using namespace std;
int InsertionSort(int arr[],int n){
    
    int j;
    for(int i =1;i<n;i++){
        int temp = arr[i]; 
        for ( j = i-1; j>=0 ; j--) 
        {
            if(arr[j]>temp){
                arr[j+1] =arr[j];
            }
            else{
                break;
            }

        }
        arr[j+1] =temp;

        
    }

      for(int i = 0;i<n; i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
int arr[] = {10,1,7,6,14,9};
int n = 6;
InsertionSort(arr,n);
return 0;
}