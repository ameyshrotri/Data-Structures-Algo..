#include<iostream>
using namespace std; 


int maxcntno(int arr[], int n){
    int cnt = 0;
    int maxi = 0;
    for (int  i = 0; i < n; i++)
    {
        if(arr[i]== 1){
            cnt++;
            maxi = max(maxi,cnt);

        }
        else{
        cnt = 0;
        }
    }

    cout<<maxi;
}



int main(){
    int arr[] = {1,1,0,0,1,0,1,1,1};
    int n = 9;
    maxcntno(arr,n);
return 0;
}