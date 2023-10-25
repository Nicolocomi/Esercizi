#include <iostream>
using namespace std;
int min4 (int, int , int , int);
int main ()
{
    int a , b, c, d;
    cin >> a >> b >> c >> d;
    cout << "Il minimo assoluto tra i numeri e' :   " << min4(a,b,c,d)  << endl;
    return 0;
}
int min2(int, int) ;
int min4 (int z, int c, int v, int n)
{
    int minimoass= min2(z,c);
    if (min(v,n)<minimoass) minimoass = min2(v,n);
    return minimoass;
}

int min2 (int x, int y)
{
    int min = x;
    if (y<x) min =y;
    return min;
}


