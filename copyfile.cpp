#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>
using namespace std;
/*Scrivere un programma che, dati in input da linea di comando
i nomi di due file, A e B, copi il contenuto di A all’interno di B.
Implementare anche dei controlli che avvisino l’utente in caso
il numero di argomenti sia sbagliato (manca il file di input)
oppure nel caso in cui il file di input non esista.
*/
int main (int argc, char * argv [])
{
    fstream myin, myout;
    if (argc!=3) 
    {
        cerr << "Usage: ./a.out <source> <target> <target>\n";
        exit(0);
    }
    myin.open(argv[1] , ios::in);
    if (myin.fail())
    {
        cerr << "Il file " << argv[1] << " non esiste\n";
        exit(0);
    }
    myout.open (argv [2], ios::app);
    if (myout.fail())
    {
        cerr << "Il file non esiste\n";
    }
    char c [20];
while (myin.getline(c, 20))
    {
        myout << c ;
    }
    myin.close();
    myout.close();







    return 0;
}