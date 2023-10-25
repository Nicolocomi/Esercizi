#include <iostream>
using namespace std;
int max (int, int , int ) ;
int main ()
{
    int x ,y, z ;
    cin >> x >> y >> z ;
    cout << "iL MASSIMO TRA QUESTI 3 NUMERI E' : " << max(x,y,z) << endl;
    return 0;
}
int max (int a , int b , int c )
{
    int max = a;
    if (b>max) max=b ;
    if (c>max) max=c;
    return max;
}