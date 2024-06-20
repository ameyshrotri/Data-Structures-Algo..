#include<iostream>
using namespace std;

 class node{
    public:
        int data;
        node* next;

        node(int data1,node* next1= NULL){
            data = data1;
            next = next1;   
        }     
    };

    node* arrtoll(int arr[],int size){
        if(size == 0){
            return 0;
        }

        node* head = new node(arr[0]);
    node* current  = head;
    for(int i = 1;i<size; i++){
        node* next = new node(arr[i]);
        current->next = next;
        current = next;
    } 
    return head;   
}

int display(node* head){
    node* current = head;
    while(current != nullptr){
        cout<<current->data<<" ";
        current = current->next;
    }
    cout<<endl;
}



int main(){
int arr[] = {1,2,3,4,5};
int size = 5;
node* head =  arrtoll(arr,size);
display(head);
return 0;
}