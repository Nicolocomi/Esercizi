#include <iostream>
#include <cstring>
using namespace std;
/*Scrivere un programma che legge una linea di testo e la stampa dopo
averne rimosso tutti gli spazi*/
int main ()
{
    char string1 [100];
    while(cin.get(*string1))
    {
    if (*string1 == ' ')
    {
        cout << "" ;
    }
    else cout << *string1;
    if (*string1 == '\n')
    break;
    }
    return 0 ;

} 