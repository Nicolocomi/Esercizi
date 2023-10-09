#include <iostream>
using namespace std;
int cube(int x)
{ // restituisce il cubo di x 
return x*x*x;
}


int main ()
{
    int n =1 ;
    while(n!=0)
    {
        cin >> n ;
        cout << "\tcube(" << n <<  ") =  " << cube(n) <<endl;

    }







    return 0;
}