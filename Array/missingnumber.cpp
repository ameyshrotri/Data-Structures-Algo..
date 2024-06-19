// find missing number in array

// #include<iostream>
// using namespace std;
// int findmisssing(int arr[], int n){
//     int cnt = 0;

//     for(int i = 1; i<=n; i++){
//         cnt += i;
//     }
// int ncnt = 0;
//     for(int i = 0; i<n-1; i++){
//         ncnt += arr[i];
//     }
// int no = cnt - ncnt;
//     cout<<endl<<no<<endl;
// }
// int main(){
//     int arr[] = {1,2,4,5,6};
//     int n = 6;
//     findmisssing(arr,n);
//     return 0;
// }



// by using hashing  we can  solve 
#include<iostream>
using namespace std;
int findmisssing(int arr[], int n){
    int hash[n+1] = {0};

    for(int i = 0; i< n-1;i++){
        hash[arr[i]] = 1;
    }

    for(int i = 1; i<=n;i++){
        if(hash[i]==0){
           cout<<i;

        }
    }
}
int main(){
    int arr[] = {1,2,4,5,6};
    int n = 6;
    findmisssing(arr,n);
    return 0;
}