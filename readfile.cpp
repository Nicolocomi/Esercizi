#include <iostream>
#include <cstdlib>

#include <fstream>
using namespace std;
/*Scrivere un programma che, dato in input da linea di
comando il nome di un file, ritorni a video il contenuto del
suddetto file. Implementare anche dei controlli che avvisino
l’utente in caso il numero di argomenti sia sbagliato (manca il
file di input) oppure nel caso in cui il file di input non esista.*/
int main (int argc, char * argv [])
{
    fstream myin;
    if (argc!=2) 
    {
        cerr << "Usage: ./a.out <source> <target>\n";
        exit(0);
    }
    myin.open(argv[1] , ios::in);
    if (myin.fail())
    {
        cerr << "Il file " << argv[1] << " non esiste\n";
        exit(0);
    }
    char c [20];
while (myin.getline(c, 20))
    {
        cout << c ;
    }
    myin.close();







    return 0;
}