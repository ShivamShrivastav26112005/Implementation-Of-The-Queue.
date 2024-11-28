#include<iostream>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

class Queue
{
    public:
    Node* head;
    Node* tail;
    int size;
    Queue()
    {
        head=tail=NULL;
        size=0;
    }

void push(int val) // insertattail
{
    Node* temp= new Node(val);
    if(size==0) head=tail=temp;
    else
    {
        tail->next=temp;
        tail=temp;
    }
    size++;
}

void pop()
{
    if(size==0)
    {
        cout<<"Queue is empty "<<endl;
        return;
    }
    
    // head=head->next;
    // size--;

    //    OR 

    // if we want to delete a node then we delete node permanetely using delete keyword
    // we put a temp node on a deleted node and we delete temp node by using delete function 

    Node* temp=head;
    head=head->next;
    size--;
    delete(temp); // wastage nhi ho rha h 

}

int front()
{
    if(size==0)
    {
        cout<<"Queue is empty "<<endl;
        return -1;
    }
    return head->val;
}

int back()
{
    if(size==0)
    {
        cout<<"Queue is empty "<<endl;
        return -1;
    }
    return tail->val;
}

bool empty()
{
    if(size==0) return true;
    else return false;
}

void display()
{ 
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
};

int main()
{
        Queue q;
        q.pop();
        q.push(10);
        q.push(20);
        q.push(30);
        q.push(40);

        q.display();

        q.push(50);
        q.push(60);

        q.display();
        q.pop();
        q.display();
        
}


// Queue is empty 
// 10 20 30 40 
// 10 20 30 40 50 60 
// 20 30 40 50 60 




