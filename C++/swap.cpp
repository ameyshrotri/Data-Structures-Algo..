#include<iostream>
using namespace std;
int search(int arr[], int n, int k){
        int start = 0;
        int end = n-1;

        while(start<=end){
            int mid = start + (end-start)/2;
            if(arr[mid]== k){
                cout<<endl<<"element found at index "<<mid<<endl;
            }

            if(k>arr[mid]){
                start = mid +1;
            }
            else{
                end = mid -1;
            }
        }
        return -1;
}
int main(){
int arr[] = {1,2,3,4,5,6};
int n = 6;
int k = 2;
search(arr,n,k);
return 0;
}