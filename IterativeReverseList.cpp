#include <iostream>
using std::cout;
using std::endl;

struct node
{
    int data;
    node * next;
};
node * Insert (node * head, int x);
void Print (node * head);
node * Reverse (node * head);
int main ()
{   
    node * head = nullptr;
    head= Insert(head,2);
    head= Insert(head,4);
    head = Insert(head,6);
    head= Insert(head,8);
    Print(head);
    head = Reverse(head);
    Print (head);
    return 0;
}
node * Insert (node * head, int data)
{
    node * temp = new node ;
    temp->data = data;
    temp->next = nullptr;
    if (head == nullptr)
    {
        head = temp;
    }
    else 
    {
        node * temp1= head;
        while (temp1->next != nullptr)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
    return head;
}
void Print(node * head)
{
    
    while (head!=nullptr)
    {
        cout << head->data  << endl;
        head = head->next;
    }
}
/*void Reverse ()
{
    node *current , *prev, *next;
    current = head;
    prev = nullptr;
    while (current != nullptr)
    {
        next = current->next;
        current->next = prev; 
        prev = current;
        current = next;
    }
    head = prev;
}*/
node * Reverse (node * head)
{
     node *current , *prev, *next;
    current = head;
    prev = nullptr;
    while (current != nullptr)
    {
        next = current->next;
        current->next = prev; 
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}