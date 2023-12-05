/*Sia dato in input un file contenente una sequenza di stringhe formate da
(massimo 10) ripetizioni dell’unico carattere * e separate da uno o più
spazi e ritorni a capo. Le stringhe rappresentano una sequenza di interi
positivi codificati in codice unario. Scrivere un programma che calcoli la
media dei valori contenuti nel file e la appenda a fine file in codice unario
(arrotondato per difetto). Usare solo le librerie <fstream> e <iostream>*/
#include <iostream>
#include <fstream>
using namespace std;
int main (int argc, char * argv[])
{
    ifstream myinput;
    fstream myapp;
    if (argc != 2)
    {
        exit (0);
    }
    myinput.open (argv[1]);             // apro file lettura

    if (myinput.fail())
    {
        exit (1);
    }

    int contatore_asterischi = 0;
    int contatore_spazi = 0;
    char c ;

    while (myinput.get(c))
    {
        if (c == ' ' || c == '\n')
        {
            contatore_spazi++;
        }
        if (c == '*')
        {
            contatore_asterischi++;
        }
    }
    myinput.close();
    float media;
    media = (contatore_asterischi) / (contatore_spazi);
    int media_arrotondata = (int) media; 
    myapp.open(argv[1], ios::app);
    myapp << '\n';
    for (int i = 0; i < media_arrotondata; i++)
    {
        myapp << '*' ;
    }
    
    myapp.close();
    

}