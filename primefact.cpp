#include <iostream>
using namespace std;            
bool Isprime (int n, int divisore)    
{
    if (divisore==n)
        return true;              
    if(n%divisore==0)
        return false; 
    Isprime(n,divisore+1);
}
void factorized (int num, int p)
{
    if (Isprime(num, p)==1)
    {
        cout << num << endl;
    }
    if (Isprime(num, p)!=1)            
    {
        if (p==1)
        return;
        if (num%p==0)
        {
            cout << p << " " ;
            factorized(num/p , p);
        }
            if (num%p!=0)
                factorized(num,p+1);
    }
}
int main ()
{
    int n;
    cin >> n;
    int divisore=2;
    cout << " iL numero scomposto in fattori primi è "<< endl;
    factorized(n,divisore);
    return 0;
}