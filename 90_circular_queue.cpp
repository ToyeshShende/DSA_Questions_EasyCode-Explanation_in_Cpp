#include <bits/stdc++.h> 
class CircularQueue{
    int *arr;
    int front,rear;
    int size;

    public:
    // Initialize your data structure.
    CircularQueue(int n){
        size=n;
        arr=new int[size];
        front=rear=-1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        //if full
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1)) ){
            return false;
        }
        //empty
        else if(front==-1){
            front=rear=0;
            arr[front]=value;
        }
        else if(front!=0 && rear==size-1){
            rear=0;
            arr[rear]=value;
        }
        else{
            rear++;
            arr[rear]=value;
            
        }
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if( front==-1){
            return -1;  //empty
        }
        int data=arr[front];
        if(front==rear){
            //single element
            arr[front]=-1;
            rear=front=-1;
            

        }
        else if(front==size-1){
            front=0;
        }
        else {
            front++;
        }
        return data;
    }
};
