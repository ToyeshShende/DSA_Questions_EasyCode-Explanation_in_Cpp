IN doubly linked list we can transverse through node from both side ie. from end and starting   

// doubly linked list
#include <iostream>

using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int da){
        data=da;
        next=NULL;
        prev=NULL;
    }
};
void insertathead(int dat,Node* &head){
    if(head==NULL){
        head->data=dat;
    }
    Node *temp=new Node(dat);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertat_tail(int data,Node* &head){
    Node *temp=new Node(data);
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    temp->prev=curr;
    
}
void insert_at_anyposition(int data,Node* &head,int position){
    Node *n=new Node(data);
    Node *temp=head;       //5 10 20   first link 15 with 20 and then linke 10 to 15
    
    for(int i=1;i<position-1;i++){
        temp=temp->next;
        
    }
    n->next=temp->next;  //new is 15 and temp is 10 so next will be 20 
    n->prev=temp;
    temp->next->prev=n;
    temp->next=n;
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
    temp->next->prev=curr;
    delete temp;
}
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        if(temp->next!=NULL){
            cout<<"->";
        }
        temp=temp->next;
    }
}
int main()
{
    Node *n=new Node(50);
    Node *head=n;
    //insert at head
    insertathead(10,head);
    insertathead(5,head);
    print(head);
    cout<<endl;
    //insert at insertat_tail
    insertat_tail(20,head);
    insertat_tail(30,head);
    print(head);
    cout<<endl;
    insert_at_anyposition(15,head,3);
    print(head);
    cout<<endl;
    //delete head
    deletehead(head);
    print(head);
    cout<<endl;
    //delete at tail
    delete_at_tail(head);
    print(head);
    cout<<endl;
    //delete 15 
    delete_specific(head,15);
    print(head);
    cout<<endl;
     

    
    return 0;
}
