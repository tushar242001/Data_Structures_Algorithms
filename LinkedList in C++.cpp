// Implementation of LinkedList in C++ .

#include <iostream>
using namespace std;

class Node{
public:
    int data ; //Defined data for node
    Node * next;
};
Node *h,*p,*q ,*r;

// Insert a  node in LinkedList
void create(int x)
{
    h=(Node*)malloc(sizeof(Node));
    h->data=x;
    h->next=NULL;
}

// Insert a node at end of LinkedList
void InsertAtLast(int x)
{
    if(h==NULL)
    {
        create(x);
    }
    else
    {
        p=h;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        q=(Node*)malloc(sizeof(Node));
        q->data=x;
        q->next=NULL;
        p->next=q;
    }
}

//Insert a node at first of LinkedList

void InsertAtFirst(int x)
{
    if(h==NULL)
    {
        create(x);
    }
    else{
        q=(Node*)malloc(sizeof(Node));
        q->data=x;
        q->next=h;
        h=q;
    }
}
// Insert Element at Random place if value and position is given
void RandomInsert(int x,int pos)
{
    if(h==NULL)
    {
        create(x);
    }
    else{
        p=h;
        while(pos>2)
        {
            pos--;
            p=p->next;
        }
        q=p->next;
        r=(Node*)malloc(sizeof(Node));
        r->data=x;
        r->next=q;
        p->next=r;
    }
}
//Display all the elements of LinkedList
void print()
{
    if(h==NULL)
    {
        cout<<"UnderFlow "<<endl;
        
    }
    else{
        p=h;
        while(p!=NULL)
        {
            cout<<p->data<<" ";
            p=p->next;
        }
        cout<<endl;
    }
}

// Delete Last Element of the LinkedList
void deleteLast()
{
    if(h==NULL)
    {
        cout<<"UnderFlow"<<endl;
    }
    else if(h->next==NULL)
    {
        free(h);
        h=NULL;
    }
    else
    {
        p=h;
        while(p->next->next!=NULL)
        {
            p=p->next;
        }
        q=p->next;
        free(q);
        p->next=NULL;
    }
}

// Delete First Element of the LinkedList
void deleteFirst()
{
    if(h==NULL)
    {
        cout<<"UnderFlow"<<endl;
    }
    else if(h->next==NULL)
    {
        free(h);
        h=NULL;
    }
    else{
        q=h->next;
        free(h);
        h=q;
    }
}

//Delete Random Element of LinkedList
void RandomDelete(int x)
{
    if(h==NULL)
    {
        cout<<"UnderFlow "<<endl;
    }
    else if (h->data==x)
    {
        deleteFirst();
    }
    else{
        p=h;
        while(p->data!=x)
        {
            p=p->next;
            if(p->next==NULL)
            {
                break;
            }
        }
        if(p->data!=x)
        {
            cout<<"Data Not Found "<<endl;
        }
        else
        {
            if(p->next==NULL)
            {
                deleteLast();
            }
            else{
                p=h;
                while(p->next->data!=x)
                {
                    p=p->next;
                }
                
                r=p->next;
                q=p->next->next;
                p->next=q;
                free(r);
            }
        }
    }
}


int main()
{
    create(10);
    InsertAtLast(20);
    InsertAtLast(30);
    InsertAtLast(40);
    InsertAtLast(50);
//    InsertAtFirst(5);
    
    cout<<endl;
    print();
//    cout<<endl<<endl;
//    deleteLast();
//    print();
//    cout<<endl<<endl;
//    RandomInsert(155, 2);
//    print();

}
