// question  ==  https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1


#include<iostream>
using namespace std;
int sort(int arr[],int n, int k){
   
    bool swapped;
    for(int i = 0; i<n; i++){
      swapped = false;
      for (int j = 0; j < n - i - 1; j++)
      {
        if(arr[j]>arr[j+1]){
       swap(arr[j],arr[j+1]);
       swapped = true;

        }
      }
      
    }
    if(!swapped){
        cout<<"array sorted"<<endl;
    }
    cout<<arr[k-1];
}


int main(){
    int arr[] = {1,445,3,4,5};
    int n = 5;
    int k =3;
    sort(arr,n,k);
    return 0;
}