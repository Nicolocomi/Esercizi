#include <iostream>
#include <cstring>
#include <cctype>
using namespace std ;
/*Scrivere un programma che legge una linea di testo
e la stampa con tutte lettere maiuscole*/
void linetoupp (char * string1);
int main ()
{
    char string1 [100];
    cout << "Inserisci la stringa max 99 caratteri : " << endl;
    cin.getline (string1, 100);
    cout << "La stringa con i caratteri maiuscoli e ' : "; 
    linetoupp (string1);
    return 0 ;
}
void linetoupp (char * string1 )
{
    int lenght = strlen (string1);
    for (int i = 0 ; i < lenght ; i++)
    {
        cout << (char)toupper(string1[i]);
    }
    cout << endl;
}