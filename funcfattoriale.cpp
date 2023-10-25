#include <iostream>
using namespace std;
int fattoriale (int n )
{
    int fact =1;
    for(int i = 0 ; n>1; i++ )
    {
        fact= fact*n;
        n--;
    }
    return fact;
}

int main ()
{
    int n ;
    cin >> n;
    cout << "iL FATTORIALE DI  " << n <<  "  E' : " << fattoriale(n) << endl;
    return 0;
}