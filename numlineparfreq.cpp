#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
using namespace std;
/*Scrivere un programma che conta e stampa il numero di linee e parole e le frequenze
delle lettere in input .
*/
char toLower(char c);
const int SIZE_ALFABETO = 26;
int main (int argc , char * argv [])
{
    if (argc != 3)
    {
        cerr << "Usage ./a.out <filein> <fileout> " << endl;
        exit (0);
    }
    ifstream myinput;
    ofstream myoutput;
    myinput.open (argv[1]);
    if (myinput.fail())
    {
        cerr << "Il file non esiste !" << endl;
        exit(0);
    }

    char c ;    
    int parole= 0;                          // contatore parole;
    int line = 0 ;                          // contatore linee;
    
    int lettere [SIZE_ALFABETO] = {};       // ARRAY DOVE CONTARE LE FREQUENZE LETTERE
    myoutput.open (argv[2]);
    if (myoutput.fail())
    {
        cerr << "Failed creation" << endl;
        exit(0);
    }

    myinput.close();
    myinput.open (argv[1]);
    if (myinput.fail())
    {
        cerr << "Il file non è stato riaperto correttamente!" << endl;
        exit(0);
    }
    while (myinput.get(c))
    {

        if (c == '\n')
        line++;

        if (c == ' ' || c== '\n' || c == '\t')
        parole++;  

        if (isalpha(c))
        {
            char lettera = toLowerCustom(c); // Converto il carattere in minuscolo prima di contare la frequenza
            lettere[lettera - 'a']++;
        }
        
    }

    myoutput << "Il numero di linee e': " << line << endl;          //STAMPA NUMERO DI LINEE NEL FILE OUT

    myoutput << "Il numero di parole e': " << parole << endl;             // STAMPA NUMERO DI PAROLE NEL FILE DI OUTPUT

    myoutput << "Frequenza delle lettere : " << endl;  

    for (int i = 0 ; i < SIZE_ALFABETO; i++)
    {
        char lettera = 'a' + i;
        myoutput << lettera << ": " << lettere [i] << endl;
    }
    myinput.close();
    myoutput.close();
    return 0;
}
char toLower(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + ('a' - 'A');
    }
    return c; 
}