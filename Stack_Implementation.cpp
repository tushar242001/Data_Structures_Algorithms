/*   ____________________Stack______________________________
Stack : A stack is a linear data structure in which the insertion of a new element and 
       removal of an existing element takes place at the same end represented as the top of the stack.

The functions associated with stack are:

empty() – Returns whether the stack is empty – Time Complexity : O(1) 
size() – Returns the size of the stack – Time Complexity : O(1) 
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
pop() – Deletes the most recent entered element of the stack – Time Complexity : O(1)     */


// Implementation of Stack using Array .

#include <iostream>
# define MAX 1000
using namespace std;

class Stack 
{
    int top;
    public:
    int array[MAX] ;
    Stack(){
        top=-1;
    }
    void push(int x)                // Push Function to push elements into stack, Timecomplexity :O(1) 
    {
        if(top>MAX)
        {
            cout<<"Stack Overflow" <<endl;
        }
        else
        {
            array[++top]=x;
        }
    }
    int pop()                       // Pop Function to pop elements from stack, Timecomplexity :O(1) 
    {
        int x;
        if(top<0)
        {
            cout<<"Stack Underflow "<<endl;
            return 0;
        }
        else
        {
             x=array[top--];
        }
        return x;
    }
    int peek()                       // Peek Function gives topmost element of the stack, Timecomplexity :O(1) 
    {
        int x;
        if(top<0)
        {
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        else
        {
            x=array[top];
        }
        return x;
    }
    
    bool isEmpty()
    {
        if(top<0)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(15);
    s.push(20);
    s.push(30);
    cout<<"Top Element : "<<s.peek()<<endl;
    
    while(s.isEmpty()!=true)
    {
        cout<<"Elements are : "<<s.pop()<<endl;
    }

    return 0;
}

**********************************************************************************************************************
// Implementation of Stack using LinkedList .

#include <iostream>
using namespace std;

class ListNode{
    public:
    int data;
    ListNode* next;
};

ListNode *p,*h;
void create(int data)
{
    h=(ListNode*)malloc(sizeof(ListNode));
    h->data=data;
    h->next=NULL;
}
void push(int data)
{
    if(h==NULL)
    {
        create(data);
    }
    else{
        p=(ListNode*)malloc(sizeof(ListNode));
        p->data=data;
        p->next=h;
        h=p;
    }
}
void pop()
{
    if(h==NULL)
    {
        cout<<"Stack is Empty"<<endl;
    }
    else
    {
        p=h;
        h=h->next;
        cout<<"Element :"<<p->data<<"is removed from stack"<<endl;
        free(p);
       
    }
}

void display()
{
    if(h==NULL)
    {
        cout<<"Stack is Empty"<<endl;
    }
    else
    {
        p=h;
        while(p!=NULL)
        {
            cout<<"Element : "<<p->data<<endl;
            p=p->next;
        }
    }
}

void peek()
{
    if(h==NULL)
    {
        cout<<"Stack is Empty"<<endl;
    }
    else
    {
        cout<<"Top Element of Stack : "<<h->data<<endl;
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    cout<<"Elements: "<<endl;
    display();
    cout<<"\n\n\n";
    pop() ;
    cout<<"\n\n\n";
    display();
    cout<<"\n\n\n";
    peek();
    display();
    cout<<"\n\n\n";
}

/*  Uses of Stack 

1) Backtraking
2) Expression Evaluation 
3) Parenthesis Checking
4) Recusrion 
5) Reverse a Data 
6) Undo Redo actions 
7) Processing Function Calls 

*/

*/Advantages of Stack 
1) Efficient memory utilization : Stack uses a contiguous block of memory, 
                                 making it more efficient in memory utilization as compared to other data structures.
2) Fast access time: Stack data structure provides fast access time 
                     for adding and removing elements as the elements are added and removed from the top of the stack.

Disadvantages of Stack 
1) No random access .
       
*/
