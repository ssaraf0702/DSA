#include<iostream>
using namespace std;

struct node{
    int value;
    node* next;
};

class linkedlist{

    node* head = nullptr;
    node* tail = nullptr;

    public:
    void addnode(int data);
    void display();
};

void linkedlist::addnode(int data)
{
    node* newnode  = new node;
    newnode->value = data;
    newnode->next  = nullptr;

    if(head==nullptr)
    {
        head = newnode;
        tail = newnode;
    }
    else{
        tail->next = newnode;
        tail = newnode;
    } 
}

void linkedlist::display()
{
    node *itr = head;
    cout << "Begin->";
    for(; itr!=nullptr; itr=itr->next)
    {
        cout << itr->value << "->";
    }
    cout <<"end" << endl;
}

int main()
{
    linkedlist obj;
    obj.addnode(5);
    obj.addnode(25);
    obj.addnode(17);
    obj.addnode(11);
    obj.display();

    return 0;
}