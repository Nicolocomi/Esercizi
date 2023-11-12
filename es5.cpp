#include <iostream>
using namespace std ;
/*Scrivere una funzione cui viene passato un array di n puntatori a float e che restituisce un 
puntatore al maggiore di tali float*/

float * max (float ** poin1 , int n);
int main ()
{
    int n ;
    cout << "Inserisci il numero di puntatori a float : ";
    cin >> n;
    float * arr1 [n];
    cout << "Inserisci i valori float uno per riga :\n";
    for (int i = 0 ; i < n ; i++)
    {
        arr1 [i] = new float;
        cin >> *(arr1[i]) ;
        cout << arr1[i] << " ";
        cout << endl;
    }
    float * maggiore = max (arr1, n);
    for (int j  = 0; j < n ; j++)
    {
        delete arr1[j];
        arr1 [j] = nullptr;
    }
    
    cout << "L'INDIRIZZO del maggiore dei float e ': " << maggiore << endl;
    delete maggiore;
    return 0;
}
float* max(float** poin1, int n)
{
    float* massimo = poin1[0];

    for (int i = 1; i < n; i++)
    {
        if (*(poin1[i]) > *massimo)
        {
            massimo = poin1[i];
        }
    }

    return massimo;
}
