#include<iostream>
using namespace std;

class node{
 public:
    int data;
    node* next;

    node(int data1){
         this->data =data1;
         this->next = nullptr;
    }
};

void insert(node*& head, int data){
    node* current = new node(data);
    if(head == nullptr){
        head = current;
    }
    else{
        node* n = head;
    while (n->next !=nullptr)
    {
       n = n->next;
    }
    n->next = current;
    
    }
    
}

void display(node* head){
    node* current = head;
    while (current != nullptr)
    {
        cout<<current->data<<endl;
        current  = current->next;
      
    }
       
}
int main(){
node* head = nullptr;
 insert(head,1);
 insert(head,1);
 insert(head,2);
 insert(head,13);
 insert(head,14);

display(head);
return 0;
}