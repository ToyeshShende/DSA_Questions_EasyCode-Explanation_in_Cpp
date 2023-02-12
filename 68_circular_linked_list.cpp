

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

void insert_at_anyposition(int data,Node* &tail,int element){
    
    if(tail==NULL){
        Node *n=new Node(data);//for empty linked list
         tail=n;
         n->next=n;
    }
    else{
        Node *curr=tail; // 15 15....
                                   
        while(curr->data !=element){
            curr=curr->next;
        }
        Node *tempe=new Node(data);
        tempe->next=curr->next;
        curr->next=tempe;
        
        
    
    }
}

void delete_specific(Node* &tail,int val){
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != val) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}


void print(Node *tail){
    Node *temp=tail;
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }
    do{
        cout<<tail->data;
        if(tail->next!=temp){
            cout<<"->";
        }
        tail=tail->next;
    }while(tail!= temp);
    cout<<endl;
}
int main()
{
    Node *tail=NULL;
    
    insert_at_anyposition(15,tail,1);    //15  15....
    
    insert_at_anyposition(20,tail,15);  // 15 20 15...
    insert_at_anyposition(3,tail,20);  // 15 30 30 15....
   
    print(tail);
    cout<<endl;
   
  
    //delete 15 
    delete_specific(tail,15);
    print(tail);
    cout<<endl;
   
     

    
    return 0;
}

