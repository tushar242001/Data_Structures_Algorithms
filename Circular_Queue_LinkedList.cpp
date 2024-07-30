//Circular queue using linkedlist in C++ program 

#include<iostream>

using namespace std;

class Node
{
public:
  int data;
  Node *next;
};

class CircularQueue
{
private:
  Node * front;
  Node *rear;

public:
    CircularQueue ()
  {
    front = rear = nullptr;
  }

  void enqueue (int data)
  {
    Node *newNode = new Node ();
    newNode->data = data;
    newNode->next = nullptr;

    if (front == nullptr)
      {
	front = rear = newNode;
	rear->next = front;
      }
    else
      {
	rear->next = newNode;
	rear = newNode;
	rear->next = front;
      }

    cout << data << " has been enqueued." << endl;
  }

  void dequeue ()
  {
    if (front == nullptr)
      {
	cout << "Queue is empty." << endl;
      }
    else if (front == rear)
      {
	Node *temp = front;
	front = rear = nullptr;
	delete temp;
      }
    else
      {
	Node *temp = front;
	front = front->next;
	rear->next = front;
	delete temp;
      }
  }

  void display ()
  {
    if (front == nullptr)
      {
	cout << "Queue is empty." << endl;
      }
    else
      {
	Node *temp = front;
	cout << "Circular Queue: ";
	do
	  {
	    cout << temp->data << " ";
	    temp = temp->next;
	  }
	while (temp != front);
	cout << endl;
      }
  }
};

int main ()
{
  CircularQueue q;

  q.enqueue (10);
  q.enqueue (20);
  q.enqueue (30);
  q.enqueue (40);
  q.display ();

  q.dequeue ();
  q.dequeue ();
  q.display ();

  q.enqueue (50);
  q.enqueue (60);
  q.display ();

  return 0;
}
