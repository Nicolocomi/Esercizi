#include <iostream>
using namespace std;
int max (int, int , int );
int main ()
{
    int x ,y, z ;
    cin >> x >> y >> z;
    cout << "iL MASSIMO TRA QUESTI 3 NUMERI E' : " << max(max(x,y),z) << endl;
    return 0;
}
int max (int , int ) ;
int max (int a , int b  )
{
    int max1=a;
    if (b>max1) max1 = b;
    return max1;
}
int max (int c, int d , int e)
{
    int max2= max(c,d);
    if (max(c,d) > e) max2=e;
    return max2;
}