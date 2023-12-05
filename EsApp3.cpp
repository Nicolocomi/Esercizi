/*Scrivere un programma che, dato un vettore v di dimensione 5
contenente caratteri maiuscoli definiti a tempo di compilazione, chieda
in input un intero positivo j e stampi un nuovo vettore ottenuto dalla
rotazione a sinistra di j posizioni del contenuto del vettore v */
#include <iostream>
using namespace std;
const int dim = 5;
int main ()
{
    char vettore [dim] = {'A','B','C','D','E'};                     // array circolare
    int j ;
    cin >> j ;
    for (int i = 0 ; i <=j ; i++, j++)
    {
        vettore [i] = vettore [i - j + dim ] % dim;
        cout << vettore [i];
    }
}