#include <iostream>
using namespace std;
float min (float a[], int n );
int main ()
{
    int size = 5;
    float a[size]={21,34,345,12,43};
    cout << "Il minimo tra questi elementi e' : " << min (a,size-1) << endl;
    
}
 //restituisce il valore minimo fra i primi n elementi dell'array

    float min(float a[], int n) {
    if (n == 0)
        return a[0];

    float minimo = min(a, n - 1);
    
    if (a[n] < minimo)
        minimo = a[n];

    return minimo;
}