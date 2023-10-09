#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;
int main ()
{
    // trova il MCD tra numero 1 e numero 2 ;
    int numero1, numero2;
    cout << "Inserisci il numero 1 :  ";
    cin >> numero1;
    cout << "Inserisci il numero 2 :   " ;
    cin >> numero2;
    /* mediante divisioni ripetute! dell' intero più grande per l' intero più piccolo 
    e sostituendo il grande con il più piccolo e il più piccolo con il resto; 
    intero1 = intero2 * quoziente + resto;
    un numero è divisore comune di intero1 e intero2 se e sllo se è divisore comune di n e r ;
     */
    int quoziente, resto, MCD ; 
    for (int i = 0 ; numero2 != 0 ; i++ )
    {
        quoziente = numero1 / numero2;
        resto = numero1 % numero2;
        numero1 = numero2;
        numero2= resto; 
        
    }
    cout << "Il MCD tra i numeri e ' :    " << numero1  << endl;
    cout <<endl;

    

    













    


    return 0;
}