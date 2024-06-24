#include<iostream>
using namespace std;
int sort(int arr[],int n)
{
    int c0= 0;int c1=0; int c2 =0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]== 0){
            c0++;
        }
        else if (arr[i]==1)
        {
            c1++;
        }
        else if (arr[i]==2) 
        {
            c2++;
        }

        
    }
int index = 0;
    for(int i = 0;i<c0;i++){
        arr[index++]=0;
    }

     for(int j = 0;j<c1;j++){
        arr[index++]= 1;
    }

     for(int k = 0;k<c2;k++){
        arr[index++] =2;
    }


    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }

    cout<<index;
    
    
}
int main(){
    int arr[] = {0,1,0,2,1,0,2};
    int n = 7;
    sort(arr,n);
    return 0;

}