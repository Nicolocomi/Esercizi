#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int p;
    cout << "Inserire un intero :  ";
    cin >> p;
    int sum=0;
        for (int i =0 ; i <= p ; i++  )
        {
        sum = sum + (i*i) ;
        }
        cout << setw(4) << sum;







    return 0;
}