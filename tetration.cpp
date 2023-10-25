#include <iostream>
#include <cmath>
using namespace std;
// Implementa una funzione che calcoli la tetrazione di un numero in modo ricorsivo;
void Tetration (long int n, int tetrazione)
{
    //long *pq= &n;
    if(tetrazione==1)
        return;
    if (tetrazione==2)
        cout << pow(n,tetrazione);
    //if (tetrazione==pow(n,n))
        //return;
    if (tetrazione<2)
        cout << pow(n,pow(n,n)) ;
    Tetration(pow(n,n), tetrazione--);
}

int main ()
{
    long int n;
    cout <<"Inserisci il numero con cui vuoi fare la tetrazione :  " <<endl;
    cin >>n;
    long int tetrazione;
    cout <<"inserisci il numero di volte che vuoi tetrarre " <<endl;
    cin >> tetrazione;
    cout << "Ecco il numero finale : " ;
    Tetration(n, tetrazione);
    cout << endl ;
    return 0;
}