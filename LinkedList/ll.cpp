#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
public:
    Node *first;
    LinkedList()
    {
        first = NULL;
    }
    void create(int n);
    void display();
    void sortedInsert(int x);
};

void LinkedList::create(int n)
{

    // cout << "ex" << endl;
    if (first == NULL)
    {
        // cout << "j" << endl;
        Node *temp, *primary;
        first = new Node;
        cout << endl;
        cout << "Enter your data : ";
        cin >> first->data;
        first->next = NULL;
        temp = first;
        // cout << "k" << endl;
        for (int i = 0; i < n - 1; i++)
        {
            primary = new Node;
            cin >> primary->data;
            primary->next = NULL;
            temp->next = primary;
            temp = primary;
        }
    }
}

void LinkedList::display()
{

    Node *temp, *c;
    temp = new Node;
    temp = first;
    // cout << temp->next<< endl;
    cout << endl;
    cout << "Your Linked List is : ";
    int r = 0;
    while (r != 2)
    {
        if (r == 1)
        {
            r++;
        }
        c = new Node;
        c = temp;
        cout << c->data << " ";
        temp = c->next;
        if (r == 0)
        {
            if (temp->next == NULL)
            {
                r++;
            }
        }
    }
    cout << endl;
}

void LinkedList::sortedInsert(int x)
{

    Node *temp, *c, *add, *prev;
    temp = new Node;
    prev = new Node;
    temp = first;
    // cout << temp->next<< endl;
    cout << endl;
    //cout << "Your New Linked List is : ";
    if(temp->data > x){
        add = new Node;
        add->data = x;
        add->next = temp;
        first = add;
        //cout << add->data << " ";
    }
    int r = 0;
    bool done = false;
    while (r != 2)
    {
        if (r == 1)
        {
            r++;
        }
        c = new Node;
        c = temp;
        if (c->data > x && done == false)
        {
            add = new Node;
            add->next = c;
            add->data = x;
            prev->next = add;
            //cout << add->data << " ";
            done = true;
        }
        //cout << c->data << " ";
        prev = c;
        temp = c->next;
        if (r == 0)
        {
            if (temp->next == NULL)
            {
                r++;
            }
        }
    }
    if(done == false){
        add = new Node;
        add->data = x;
        add->next = NULL;
        prev->next = add;
        //cout << add->data << " ";
    }
    cout << "done" << endl;
    //cout << prev->data << endl;
}

int main()
{

    int n;
    cout << "Enter the length of your linked list : ";
    cin >> n;
    LinkedList l;
    // cout << "here" << endl;
    l.create(n);
    // cout << "ex 1" << endl;
    l.display();
    // cout << "ex 2" << endl;
    int x;
    cout << "Enter the number you want to enter into the sorted Linked List : ";
    cin >> x;
    l.sortedInsert(x);
    l.display();
}
