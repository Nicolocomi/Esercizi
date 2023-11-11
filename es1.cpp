#include <iostream>
using namespace std;
/*Scrivere una funzione che usa puntatori
per copiare un array di double*/
double * copia (double * arr1, int dim);
int main ()
{
    int dim;
    cout << "Inserisci la dimensione dell' array che vuoi copiare :";
    cin >> dim;
    double * arr1 = new double [dim];
    cout << "Inserisci gli elementi che vuoi copiare uno per riga: " << endl;
    for (int i = 0 ; i< dim ; i++)
    {
        cin >> arr1[i];
    }
    for (int j = 0 ; j< dim ;j++ )
    {
        cout << arr1[j] << " ";
    }
    cout << endl;
    
    double *arrcopy = copia (arr1, dim);
    cout << "L'array copiato e ' : ";
    for (int k = 0; k < dim ; k++)
    {
        cout << arrcopy[k] << " ";
    }
    cout << endl;
    delete [] arr1;
    delete [] arrcopy;

    return 0 ;
}
double * copia (double *arr1, int dim)
{
    double *arrcopy= new double [dim];
    /*while (dim != 0)
    {
        arrcopy[dim-1] = arr1[dim-1];
        dim --;
    }
    return arrcopy;*/
    for (int i = 0 ; i< dim ; i++)
    {
        arrcopy[i]=arr1[i];
    }
    return arrcopy;
}