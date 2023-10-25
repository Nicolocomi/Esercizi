#include <iostream>
#include <cmath>
using namespace std;
int min (int, int , int , int);
int main ()
{
    int x,y,z,w, minimo;
    cin >> x >> y>> z>> w ;
    cout << "Il minimo tra questi 4 numeri è :  " << min (x,y,z,w) << endl;
    return 0;
}
int min (int a , int b , int c , int d )
{
    int min =a ;
    if (b<min) min = b;
    if (c<min) min = c;
    if (d< min) min = d;
    return min ;



}




