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

void removehead(node*& head) {
    if (head == nullptr) { // List is empty
        return;
    }

    node* n = head;
    head = head->next;
    delete n; // Free the memory of the former head node
}

void removelast(node* &head){
    node* n = head;
    if(head == nullptr) {return;}
    if(head->next == nullptr){
        delete head;
        head = nullptr;
        return;
        }

    while (n->next->next != nullptr)
    {
        n = n->next;
    }
    delete n->next;
    n->next = nullptr;
    
    
}

void removek(node*& head,int k){
   node* current = head;
   
    if(head == nullptr) {return;}
    if(head->data == k ){
        node* del = head;
        head = head->next;
        delete del;
    
        }
   
    while (current->next != nullptr)
    {
        if(current->next->data == k){
            node* del  = current->next;
           current-> next = current->next->next;
           delete del;
        }
        else{
            current = current->next;
        }
    }
    
}
int main(){
node* head = nullptr;
 insert(head,1);
 insert(head,1);
 insert(head,2);
 insert(head,13);
 insert(head,14);


int n = 2;
removek(head,n);
 display(head);
return 0;
}