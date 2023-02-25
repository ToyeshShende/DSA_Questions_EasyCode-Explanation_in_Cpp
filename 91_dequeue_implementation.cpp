#include <bits/stdc++.h> 
class Deque
{
    int *arr;
    int front,rear;
    int size;
public:
    // Initialize your data structure.
    Deque(int n)
    {
        size=n;
        arr=new int[size];
        front=rear=-1;

    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        //full
        if(isFull() ){
            return false;
        }
        //empty
        if(front==-1){
            front=rear=0;
            
        }
        else if(front==0 && rear!=size-1){
            front=size-1;
            
        }
        else{
            front--;
        }
        arr[front]=x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        //full
        if(isFull() ){
            return false;
        }
        //empty
        if(front==-1){
            front=rear=0;
            
        }
        else if(front!=0 && rear==size-1){
            rear=0;
            
        }
        else{
            rear++;
        }
        arr[rear]=x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        //empty
        if(front==-1){
            return -1;
        }
        int data=arr[front];
        arr[front]=-1;
        if(front==rear){
            //sigle element
            front=rear=-1;
        }
        else if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
        return data;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        //empty
        if(front==-1){
            return -1;
        }
        int data=arr[rear];
        if(front==rear){
            //sigle element
            front=rear=-1;
        }
        else if(rear==0){
            rear=size-1;
        }
        else{
            rear--;
        }
        return data;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(front==-1){
            return -1;
        }
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if(rear==-1){
            return -1;
        }
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if(front==-1){
            return true;
        }
        return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if(front==0 && rear==size-1){
            return true;
        }
        if(front!=0 && rear==(front-1)%(size-1)){
            return true;
        }
        return false;
    }
};
