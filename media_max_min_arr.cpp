#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void media (float arr1[]);
void min (float arr1[]);
void max (float arr1[]);
const int dim = 10;
int main ()
{
    float arr1[dim];
    srand(time(NULL));
    for (int i =0; i<dim ; i++)
    {
        arr1[i]= rand()%13 ;
        cout << arr1[i] << " ";
    }
    cout <<endl;
    cout << "La media tra gli elementi di questo array e ' : " ;
    media (arr1);
    cout<<endl;
    cout << "Il valore minimo tra gli elementi dell'array e': ";
    min (arr1);
    cout<<endl;
    cout << "Il valore massimo tra gli elementi dell' array e' : ";
    max (arr1);
    cout <<endl;
    return 0;
}
void media (float arr[])
{
    int sum =0;
    for (int i = dim-1; i >=0; i--)
    {
        sum= sum + arr[i];
    }
    cout << (float)sum/(dim);
}
void min (float arr[])
{
    int min = arr[dim-1];
    for (int i =dim -2 ; i >=0; i--)
    {
        if (arr[i]<min)
        {
           min= arr[i];     
        }
    }
    cout << min ;
}
void max (float arr[])
{
    int max =arr[dim-1];
    for (int i = dim -2 ; i>=0; i--)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout <<max;
}