#include <iostream>
using namespace std;
/*Scrivere una funzione che usa puntatori per ricercare l'indirizzo 
di un intero dato in un array dato. Se l'intero viene trovato la funzioneù
ne restituisce l'indirizzo, altrimenti restituisce NULL*/
int * location (int * arr1, int n, int target);
int main ()
{
    int n, target;
    cout << "Inserisci la misura dell' array: " ;
    cin >> n;
    int * arr1 = new int [n];
    cout << "Inserisci gli elementi dell'array, uno per riga : " << endl;
    for (int i = 0 ; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int j = 0 ; j < n ; j++)
    {
        cout << arr1[j]<< " "; 
    }
        cout << endl;
    do
    {
        cout << "Inserire il numero di cui si vuole sapere l'indirizzo : ";
        cin >> target;
        int *result = location(arr1,n,target);
        if (result != nullptr)
        {
            cout << "L'indirizzo di " << target << " è " << result << endl;
        }
        else 
        {
            cout << "Il numero " << target << " non è stato trovato " << endl;
        }
    }
    while (target > 0);

    delete [] arr1;

    return 0;
}
int * location ( int * arr1 , int n , int target)
{
    for (int i = 0 ; i < n ; i++)
    {
        if (arr1[i] == target)
        {
        return &arr1[i];
        }
    }
        return nullptr;
}