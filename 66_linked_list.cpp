Linked list is a linear dynamic data structure .
  There is no memory wastage in this.
  
  Types:
  //1)singly linked list


//how to create
#include <iostream>

using namespace std;
class Node{
    public:
    int data;
    int *next;
    Node(int data){
        this->data=data;
        this->next=next;
    }
};
int main()
{
    Node *l1=new Node(20);
    cout<<l1->data<<endl; //will give value 20
    cout<<l1->next<<endl; //gives null value
    return 0;
}


all singly list operations
//singly linked list
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
void insertathead(int data,Node* &head){
    Node *temp=new Node(data);
    temp->next=head;
    head=temp;
}
void insertat_tail(int data,Node* &head){
    Node *temp=new Node(data);
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    
}
void insert_at_anyposition(int data,Node* &head,int position){
    Node *n=new Node(data);
    Node *temp=head;       //5 10 20   first link 15 with 20 and then linke 10 to 15
    
    for(int i=1;i<position-1;i++){
        temp=temp->next;
        
    }
    n->next=temp->next;  //new is 15 and temp is 10 so next will be 20 
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
    Node *head=NULL;
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
    //delete
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

5->10
5->10->20->30
5->10->15->20->30
10->15->20->30
10->15->20
10->20





  if custom constructor is not made inside of Node
#include <iostream>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node* next;
};

/* Function to remove the first node
of the linked list */
Node* removeFirstNode(struct Node* head)
{
	if (head == NULL)
		return NULL;

	// Move the head pointer to the next node
	Node* temp = head;
	head = head->next;

	delete temp;

	return head;
}

// Function to push node at head
void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node = new Node;
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

// Driver code
int main()
{
	/* Start with the empty list */
	Node* head = NULL;

	/* Use push() function to construct
	the below list 8 -> 23 -> 11 -> 29 -> 12 */
	push(&head, 12);
	push(&head, 29);
	push(&head, 11);
	push(&head, 23);
	push(&head, 8);

	head = removeFirstNode(head);
	for (Node* temp = head; temp != NULL; temp = temp->next)
		cout << temp->data << " ";

	return 0;
}

