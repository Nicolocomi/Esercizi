/*Scrivere un programma che dichiari e poi inizializzi (con
valori random) un array di 10 numeri interi, lo stampi a
video, lo inverta e poi stampi l’array invertito.
*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
void inverti (int arr1[], int n, int dim)                   
{
    if(n>dim)
    return;
    if(n!=dim)
    { 
        int temp=arr1[n];
        arr1[n]=arr1[dim];
        arr1[dim]=temp;
        cout << arr1[n] << " ";
        inverti(arr1,n+1, dim-1);
    }
    cout <<arr1[dim] << " ";
}
const int dim=14;
int main ()
{
    int arr1 [dim];
    srand(time(NULL));
    for(int i =0; i<dim; i++)
    {
        arr1[i]=rand()%12;
        cout<< arr1[i]<< "   ";
    }
    cout << endl;
    cout << "Ora l' array invertito e' : " ;
    inverti(arr1,0,dim-1);
    cout <<endl;
    return 0;
}