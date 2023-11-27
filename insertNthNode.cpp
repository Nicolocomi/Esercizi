#include <iostream>
using std::cout;
using std::endl;

struct node
{
    int data;
    node * next;
};
void InsertNth (int data, int x);
void Print ();
node * head;
int main ()
{   
    node * head = nullptr;
    InsertNth(2,1);
    InsertNth(3,2);
    InsertNth(4,1);
    InsertNth(5,2);
    Print();
    return 0;
}
void InsertNth (int data, int n)
{
    node * temp = new node ;
    temp->data = data;
    temp->next = nullptr;
    if (n == 1)
    {
        temp->next = head;
        head = temp;
        return;
    }
    node * temp2 = head;
    for (int i = 0 ; i < n-2 ; i++)
    {
        temp2 = temp2->next;
    }
    temp->next = temp2->next;
    temp2->next = temp;
}
void Print()
{
    node * temp = head;
    while (temp!=nullptr)
    {
        cout << temp->data  << endl;
        temp = temp->next;
    }
}
