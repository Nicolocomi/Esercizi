#include <iostream>
using namespace std;

struct nodo
{
    int dato;
    nodo* next;
};

void stampa_list(nodo* root)
{
    while (root != nullptr)
    {
        cout << root->dato << endl;
        root = root->next; 
    }
    
   
}
void deleteList (nodo* &root) // Anche nodo * root
{
    nodo *l = root;
    while(l != nullptr) {
        nodo *t = l;
        l = l->next;
        delete t;
    }
    return;
    if (root != nullptr)
    {
        deleteList(root->next);
        delete root;
    }
}
void create_list(nodo* &root, nodo* n)
{
    n->next = root;
    root = n;
}

int main ()
{
    srand(time(NULL));
    nodo *root = nullptr;
    for(int i = 0 ; i<10; i++)
    {   
        int d = rand()%10;
        nodo * n = new nodo;
        n->dato = d;
        create_list(root,n);

    }
    stampa_list(root);
    deleteList(root);


}