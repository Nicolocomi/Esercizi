#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Inserisci un numero intero :  ";
    cin >> n ;
    int fattoriale =1;
        //calcolo fattoriale di n 
    for (int i =1; n>0; n--) 
        { fattoriale = fattoriale * n*i;
          
        }
        cout << fattoriale << endl;
}