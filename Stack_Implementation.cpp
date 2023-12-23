/*   ____________________Stack______________________________
Stack : A stack is a linear data structure in which the insertion of a new element and 
       removal of an existing element takes place at the same end represented as the top of the stack.

The functions associated with stack are:

empty() – Returns whether the stack is empty – Time Complexity : O(1) 
size() – Returns the size of the stack – Time Complexity : O(1) 
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
pop() – Deletes the most recent entered element of the stack – Time Complexity : O(1)     */


// Implementation of Stack using Area .

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


