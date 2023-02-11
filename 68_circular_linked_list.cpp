//circular linked list
#include <iostream>

using namespace std;
class Node{
    public:
    int data;
    struct Node *next;
    Node(int da){
        data=da;
        next=NULL;
    }
};

void insert_at_anyposition(int data,Node* &head,int element){
    Node *n=new Node(data);
    if(head==NULL){  //for empty linked list
         head=n;
         head->next=head;
    }
    else{
        Node *curr=head; // 15 15....
        
        while(curr->data !=element){
            curr=curr->next;
            
        }
        
    
    }
}
void deletehead(Node* &head){
    if(head==NULL){
        return ;
    }
    Node *temp=head;
    head=head->next;
    delete temp;
}
void delete_at_tail(Node* &head){
    if(head==NULL){
        return ;
    }
    Node *temp=head;
    while(temp->next->next!=NULL){
     temp=temp->next;   
    }
    delete temp->next;
    temp->next=NULL;
    
}
void delete_specific(Node* &head,int val){
    if (head==NULL){
        return;
    }
    if(head->next==NULL){
        head=NULL;
        delete head;
        
        return;
    }
    Node *temp=head;
 
    Node *curr=temp;
    while(temp->data !=val){
        curr=temp;
        temp=temp->next;
        
    }
    
    curr->next=temp->next;
    delete temp;
}
void print(Node *head){
    Node *temp=head;
    do{
        cout<<head->data;
        if(head->next!=temp){
            cout<<"->";
        }
        head=head->next;
    }while(head->next!= temp)
}
int main()
{
    Node *head=NULL;
    
    insert_at_anyposition(15,head,15);    //15  15....
    insert_at_anyposition(20,head,15);  // 15 20 15...
    insert_at_anyposition(30,head,15);  // 15 30 30 15....
    print(head);
    cout<<endl;
    // //delete
    // deletehead(head);
    // print(head);
    // cout<<endl;
    // //delete at tail
    // delete_at_tail(head);
    // print(head);
    // cout<<endl;
    // //delete 15 
    // delete_specific(head,15);
    // print(head);
    // cout<<endl;
     

    
    return 0;
}
