#include <iostream>
using namespace std;

void calcoloCerchio(double&  area, double& circonferenza, double r )
{
    const double PI = 3.141592653589793;
    area =PI*r*r;
    circonferenza= 2*PI*r;
}
int main ()
{
    double r,a,c;
    cout << "Raggio: ";
    cin >> r ;
    calcoloCerchio(a,c,r);
    cout << "L area e' :  " << a << "   La circ e':   " << c << endl;
    return 0; 
}