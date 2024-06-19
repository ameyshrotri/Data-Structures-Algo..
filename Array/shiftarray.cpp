// shift the  array by 1 place from  left

// #include<iostream>
// using namespace std;
// int shift(int arr[], int n,int k ){
//     int temp[k];
//     for(int i = 0;i<k;i++){
//         temp[i] = arr[i];
//     }

//     for(int i = k; i < n; i++){
//         arr[i-k] = arr[i];
//     }
    
//     for(int i =n-k;i < n; i++){
//         arr[i] = temp[i - (n -k)];
        
//     }

//     for(int i = 0; i<n; i++ ){
//         cout<<arr[i];
//     }
    
// }
// int main(){

//     int arr[]= {1,2,3,4,5};
//     int n = 5;
//     int k =3;
//    shift(arr,n,k);
// return 0;
// }


/// second approach

// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// void rotatearray(int arr[], int n, int d) {
//     reverse(arr, arr + d);
//     reverse(arr + d, arr + n);
//     reverse(arr, arr + n);
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int n = 6;
//     int d = 3;
    
//     rotatearray(arr, n, d);

//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }



// right rotate array 

// #include<iostream>
// using namespace std;
// int rightrotate(int arr[], int d, int n){
//     int temp[d];
//     for(int i = 0; i<d;i++){
//         temp[i] = arr[i+ (n-d)];
//         // cout<<temp[i]<<endl;
//     }
// // cout<<"next";
//     for(int i = 0; i<n-d;i++){
//         arr[d + i] = arr[i];
//         // cout<<arr[i]<<endl;
//     }


//     for(int i = 0; i< d; i++){
//         arr[i] = temp[i];
//         // cout<<arr[i]<<endl;
//     }

//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<endl;
//     }
// }
// int main(){
// int arr[] = {1,2,3,4,5,6};
// int n = 6;
// int d = 3;
// rightrotate(arr,d,n);
// return 0;
// }