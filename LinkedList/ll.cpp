#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Node
{
private:
    int data;
    Node *next;

public:
    void input(int n);
};

void Node::input(int n){
    Node *first = new Node;
    first->data =  NULL;
    first->next
}

int main()
{
    int n;
    cout << "Enter the length of your Linked List : ";
    cin >> n;
    Node p;
    p.input(n);
}
