/*Scrivere un programma che, presi i nomi di due file da linea di
comando, copi il primo file nel secondo correggendone la sintassi.
Affinché un testo possa essere considerato corretto, la prima parola del
testo e tutte le parole dopo i caratteri “.”, “?” e “!” devono iniziare con
una lettera maiuscola.
Potete usare la libreria <fstream>.
Inoltre potete scrivere “input >> noskipws;” per impedire
all’operatore “>>” di skippare spazi bianchi e nuove linee
testo di prova.
correggimi 
per favore
-->
Testo di prova.
Correggimi
per favore*/
#include <iostream> 
#include <fstream>
#include <string>
using namespace std;
int main (int argc, char * argv[])
{
    if (argc != 3)
    {
        exit(0);
    }

    ifstream myinput;
    ofstream myoutput;

    myinput.open(argv[1]);
    myoutput.open (argv[2]);
    if (myinput.fail())
    {
        exit(1);
    }
    char c;
    bool var = true;
    while (myinput >> noskipws >> c)
    {
        if (var && c != '\n' && c != ' ')
        {
            c = c - 'a' + 'A' ;
            var = false;
        }
        if (c == '.' || c == '?' || c == '!' || c == '\n')
        {
           var = true;
        }  
        myoutput << c;
    }
    myinput.close();
    myoutput.close();
}
