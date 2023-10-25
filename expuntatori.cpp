#include <iostream>
using namespace std;
    int main ()

{
    int x= 232;
    int y = 321;
    cout << "x =   " << x << " iN hexadecimal :  " << &x << endl;
    int *px= &x ;
    cout << "Hex address of  y is : " << &y << endl;
    cout << "y = " << *(px +1) << "  Hex address of *(px+1) è " << px+ 1 << endl;

    //int **ppx = &px;
    //int **ppx = &px +4;
    //int n ;
    //cin >> n;
    //cout << "Indirizzo di a" << "[  " << n << " ] è = "  << a[n] <<endl;



}

