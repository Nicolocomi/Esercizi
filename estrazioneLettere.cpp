#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include "estrazioneheader.hpp"
using namespace std;
/*  Scrivere la dichiarazione e definizione di una funzione ricorsiva estrai
che, data una stringa lunga al massimo 80 caratteri senza spazi, estragga
tutte le lettere maiuscole contenute e restituisca un’altra stringa contenente
solo le lettere maiuscole.
Definire la funzione di estrazione in un file separato
“MarcoStefanoAndreaEnricoGiovannaMatteo”=“MSAEGM”   */
int main ()
{
    char String1 [81];
    char Buffer [81]= "";                   // stringa vuota su cui memorizzare i caratteri maiuscoli
    cin.ignore();                           // Pulisco il buffer di input
    cin.getline(String1,81);                // Leggo stringa
    recEstrai (String1, Buffer);
    cout << Buffer << endl;
    return 0;
}
