#include <iostream>
using namespace std;

/*bool Verifynum_aux(int a[], int n, int i) {
    if (i >= n) return false;
    return a[i] == n || Verifynum_aux(a, n, i+1);
}
bool Verifynum (int a[], int n)
{
    return Verifynum_aux(a,n,0);
}*/
bool Verificanumero (int * a , int n)
{
    if (!a) 
        return false;
    return a[0] == n || Verificanumero(&(a[1]), n);
}
int main ()
{
    int a[8] = {1,32,53,65,36,87,3,2};
    int n ;
    cin >> n;
    cout << "Res = " << Verificanumero(a, n) << endl;
    return 0;
}