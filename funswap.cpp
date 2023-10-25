#include <iostream>
using namespace std;

void swapValues (int&,  int&);
int main ()
{
    int x, y ;
    cout << "Inserisci x :  " ;
    cin >> x;
    cout << "Inserisci y :  " ;
    cin >> y;
    swapValues(x,y);
    cout << "Ora x vale " << x << "  Ora y vale : " << y << endl;
    return 0;
}
void swapValues (int& i , int& l )
{
    i= i+l;
    l=i-l;
    i=i-l; 
}