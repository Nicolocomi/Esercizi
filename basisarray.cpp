#include <iostream>
using namespace std;
int ricercalinrec (int a[],int n, int * pn, int lungh)
{
    //if(lungh > (sizeof(a)/sizeof(int))-1)
       // return -1;
    pn=&n;
    if((a+0)== pn )
        return 0 || ricercalinrec((a), n , pn, lungh);
}

int main ()
{
    int *pn;
    int n;
    cin>>n;
    int arr1[]={2,43,214,23,12,47,39,5};
    pn=&n;
    int size= sizeof(arr1)/sizeof(int);
    cout << "Il numero " << *pn << " è in posizione " << ricercalinrec(arr1,n,pn,size) <<endl;
    return 0;
}
//int ricercalineare (int [], int,int);
/*int ricercalineare (int a[], int n, int x) 
{
    for (int i =0; i<=x-1 ; i++)
        if(a[i]==n)
            return i; 
        return -1;
}
*/