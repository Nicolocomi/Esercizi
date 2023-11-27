// PRINT LINKED LIST USING RECURSION
#include <iostream>
using namespace std;

struct node 
{
    int data;
    node * next;
};
void Print (node * p)
{
    if (p->next == nullptr)
    {
        return;
    }
    cout << p->data;
    Print (p->next); // chiamata ricorsiva
}
void PrintReverse (node * p)            // p is head node 
{
    if (p->next == nullptr)
    {
        return;
    }
    Print (p->next); // chiamata ricorsiva 
    cout << p->data;
}
/* in main node * head = nullptr;
    head = Insert (head, value) 
    head = Insert (head, value)
    head = Insert (head, value)
    head = Insert (head, value)
    Print (head);