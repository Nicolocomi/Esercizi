#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
using namespace std;

struct nodo
{
    int dato;
    nodo *next;
};
void Print (nodo * p );
void Delete (nodo * primo);
int main(int argc, char * argv[])
{
    if (argc != 2)
    {
        cout << "Usage: <filename>" << endl;
        exit(1);
    }

    ifstream myinput;
    myinput.open(argv[1]);

    if (myinput.fail())
    {
        cout << "Error opening file: " << endl;
        exit(1);
    }

    nodo * primo = nullptr; // Puntatore al primo nodo 

    while (!myinput.eof() && !myinput.fail())
    {
        int num;
        myinput >> num;

        if (!myinput.fail())
        {
            // Creazione di un nuovo nodo
            nodo *nuovoNodo = new nodo;
            nuovoNodo->dato = num;
            nuovoNodo->next = nullptr;

            // Collegamento del nuovo nodo alla lista
            if (primo == nullptr)
            {
                // Se la lista è vuota, il nuovo nodo diventa il primo
                primo = nuovoNodo;
            }
            else
            {
                // Altrimenti, collega il nuovo nodo al precedente
                nodo *temp = primo;
                while (temp->next != nullptr)
                {
                    temp = temp->next;
                }
                temp->next = nuovoNodo;
            }
        }
    }

    myinput.close();

    
    Print (primo);
    Delete (primo);


    return 0;
}
void Print (nodo * p)
{
    if (p == nullptr)
    {
        cout << endl;   
        return;
    }
    cout << p->dato << " ";
    Print (p->next);            // chiamata ricorsiva
}
void Delete(nodo *primo)
{
    nodo *temp = primo;
    while (temp != nullptr)
    {
        nodo *nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
}
