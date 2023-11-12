#include <iostream>
using namespace std ;
/*Scrivere la funzione cui viene passato un array di n puntatori a float e che 
restituisce un array di nuova creazione che contiene gli stessi n valori float in ordine inverso*/
float * mirror (float ** poin1 , int n);
int main ()
{
    int n ;
    cout << "Inserisci quanti puntatori a float : ";
    cin >> n;
    float * arr1 [n];
    cout << "Inserisci " << n << " valori float, uno per riga ";
    for (int i = 0 ; i < n ; i++)
    {
        arr1[i] = new float; // Alloco memoria per ciascun float
        cin >> *(arr1[i]);
    }
    float * arrinv = mirror (arr1, n);
    cout << "L'array inverso e' : \n" ;
    for (int k = n-1 ; k >= 0  ; k--)
    {
        cout << arrinv[k] << " " ;
    }
    for (int i = 0 ; i < n ; i++)
    {
        delete arr1[i];
    }
    delete [] arrinv;



    return 0 ;
}
float * mirror (float ** poin1 , int n )
{
    float * arrfloat = new float [n];

    for (int i = n-1 ; i >= 0 ; i--)
    {
        arrfloat[i] = *(poin1[i]);
    }
        return arrfloat;
}