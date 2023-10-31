#include <iostream>
using namespace std;
/*Scrivere un programma che dichiari e poi inizializzi (con
valori random) un array di 10 numeri interi e poi prenda in
input un nuovo elemento x e un indice i, e aggiunga
l'elemento x in posizione i nell’array, traslando gli elementi
successivi. Si controlli che l’indice i inserito sia nel range
opportuno, se non lo fosse visualizzare un messaggio di
errore e richiedere un nuovo inserimento.*/
void scorrimento (int arr1[], int , int);
const int dim=10;
int main ()
{
    int arr1[dim];
    int insert;
    int index = 0 ;
    srand(time(NULL));
    for (int i =0; i<dim ; i++)
    {
        arr1[i]= rand()%13 ;
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout <<"Inserisci l'indice in cui vuoi inserire il nuovo numero : ";
    do 
    {
        cin >> index;
    } 
    while (index < 0 || index >= dim);
    cout << "Inserisci il numero che vuoi inserire : ";
    cin >> insert;
    cout << "L'array finale e' : ";
    scorrimento(arr1, insert, index);
    cout << endl;
    return 0;
}
void scorrimento (int arr1[], int insert, int index) // SISTEMA PER INDICE =0 E 1
{
        /*if (index==0)
        arr1[index]=insert;
        cout << arr1[index] << " " << arr1 [0] << " "; 
        for (int j = 0 ; j <= dim-2 ; j++ )
        {
            cout << arr1[j] << " ";
        }
        */
        int temp=arr1[index];
        arr1[index]=insert;
        if (index>1)
        {
            for (int i = 0 ; i < index; i ++)
            {
                cout << arr1[i] << " " ; 
            }
        cout << arr1[index] << " " << temp << " " ;
        for (int i = index+1; i <= dim-index; i++)
        {
            cout << arr1[i] << " ";
        }
        }
}

        




