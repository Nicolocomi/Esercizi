#include <iostream>
#include <cmath>
using namespace std;
float average(float a, float b=0, float c=0, float d=0)
{
    float somma = a+b+c+d;
    if (b==0) return somma/2;
    if (c==0) return somma/2.;
    if (d==0) return somma/3.;
    return somma / 4.;
}
int main()
{
    float x, y,z,w;
    cin >> x >> y >> z >> w ;
    cout << "La media del primo numero e ' : " << x << endl;
    cout << "La media dei primi 2 numeri e' : " << average (x,y) << endl;
    cout << "La media dei primi 3 numeri e' : " << average (x,y,z) << endl;
    cout << "La media tra questi 4 numeri e' : " << average (x,y, z,w )<< endl;
    return 0;
}