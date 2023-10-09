#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int n ;
    cout << "Inserisci un numero intero :   " ;
    cin >> n ;
    int i =0 ; 
    int sum =0;
    while (i<=n)
    {
        sum = sum + (i*i);
        i++;
    }
        cout << setw(4) << sum ;
    cout << endl;






    return 0;
}