#include <iostream>
using namespace std;
int main ()
{
    long i;
    cout << "Inserisci un intero positivo :  ";
    cin >> i ;
    cout << "I numeri della sequenza di Fibonacci <   " << i << "  sono :\n 0,\n 1" ;
    long f0=0 , f1 =1 ;
    while (true)
    {
        long f2 = f0 + f1 ;
        if (f2 > i ) break;
        cout << "  ,  \n" << f2 ;
        f0=f1;
        f1= f2;
    }






    return 0;
}