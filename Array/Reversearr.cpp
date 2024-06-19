#include<iostream>
using namespace std;
int returnf(int arr[], int len){
    for (int i = len-1; i >=0; i--)
    {
        cout<<arr[i];
    }  
    return 0;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int len = 5;
    returnf(arr,len);
    return 0;
}


// time complexity === o(n)
// space complexity === o(n)