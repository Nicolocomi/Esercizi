#include <iostream>
using namespace std;
int perm(int n, int k)
{
    int permutazione=1;
    for (int i = 1 ; k>=i ; i++) // perchè se metto come condizione (k<=i ) permutazione mi torna 1 e non  0 ??
    {
        permutazione= permutazione * n;
        n--;
    }
    return permutazione;
}
int main ()
{
    int num1 , num2;
    cin >> num1 >> num2;
    cout << "Le possibili permutazioni di " << num2 << "  elementi in un insieme di "
    << num1 << " elementi, sono : " << perm(num1 , num2) << endl;






    return 0;
}
/* 
P(n,k) = (n) *(n-1) *(n-2) * ... *(n-k+2)*(n-k+1)
prodotto di k interi decrescenti da n a (n-k+1); USA QUESTA FORMULA 
per riscrivere la funzione perm() = (n!)/ (n-k)!
*/