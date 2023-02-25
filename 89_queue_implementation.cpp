#include <bits/stdc++.h>
#define Max 100000 
class Queue {
    int qfront,rear;
    int *arr;
public:
    Queue() {
        qfront = rear = 0;

        arr = new int[Max];
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        
        if(rear==0 || qfront==rear){
            
            return true;
            
        }
        return false;
    }

    void enqueue(int data) {
        arr[rear]=data;
        rear++;
    }

    int dequeue() {
        if(qfront==rear){
            return -1;
        }
        int data=arr[qfront];
        arr[qfront]=-1;
        qfront++;
        return data;
    }

    int front() {
        if(rear==0 || qfront==rear){
            return -1;
        }
        return arr[qfront];
    }
};
