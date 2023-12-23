 /*    ***************** Queue *******************
   
Queue : A Queue is defined as a linear data structure that is open at both ends and the operations are performed in First In First Out (FIFO) order.

Basic Operations for Queue in Data Structure:

Enqueue() – Adds (or stores) an element to the end of the queue..
Dequeue() – Removal of elements from the queue.
Peek() or front()- Acquires the data element available at the front node of the queue without deleting it.
rear() – This operation returns the element at the rear end without removing it.
isFull() – Validates if the queue is full.
isNull() – Checks if the queue is empty.

Types of Queue:

1) Input Restricted Queue:        This is a simple queue. In this type of queue, the input can be taken from only one end but deletion can be done from any of the ends.
2) Output Restricted Queue:       This is also a simple queue. In this type of queue, the input can be taken from both ends but deletion can be done from only one end.
3) Circular Queue:                This is a special type of queue where the last position is connected back to the first position. Here also the operations are performed in FIFO order. 
4) Double-Ended Queue (Dequeue):  In a double-ended queue the insertion and deletion operations, both can be performed from both ends.
5) Priority Queue:                A priority queue is a special queue where the elements are accessed based on the priority assigned to them. 


Implementation of Queue using Array           */

#include <iostream>
using namespace std;

struct Queue{
    int top ,end, size;
    int *queue;
    Queue(int x)
    {
        top=end=0;
        size=x;
        queue=new int;
    }
    ~Queue()
    {
        delete[] queue ;
    }
    
    void Enque(int data)
    {
        if(size==end)
        {
            cout<<"Queue is Full "<<endl;
        }
        else
        {
            queue[end++]=data;
        }
        
    }
    void Deque()
    {
        if(top==end)
        {
            cout<<"Queue is Empty "<<endl;
            
        }
        else
        {
            for(int i=0;i<end-1;i++)
            {
                queue[i]=queue[i+1];
            }
            end--;
            
        }
    }
    void Display()
    {
        if(top==end)
        {
            cout<<"Queue is Empty "<<endl;
           
        }
        else
        {
            for(int i=top;i<end;i++)
            {
                cout<<"Elements: "<<queue[i]<<endl;
            }
            cout<<endl;
        }
    }
    void Front()
    {
        if (top == end) 
        {
            cout<<"Queue is Empty "<<endl;
        }
        else
        {
            cout<<"Top element of Queue is : "<<queue[top]<<endl;
        }
    }
    
};

int main()
{
    Queue q(5);
    q.Enque(10);
    q.Enque(20);
    q.Enque(30);
    q.Enque(40);
    q.Enque(50);
     
    cout<<"\n\n\n";
    
    q.Display();
    
    cout<<"\n\n\n";
    
    q.Deque();
    
    cout<<"\n\n\n";
    
    q.Display();
    
    cout<<"\n\n\n";
    
    q.Front();
    
}

/*
Implementation of Queue using LinkedList 



*/

