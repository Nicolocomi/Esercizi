#include <iostream>
using namespace std ;
/*Scrivere la seguente funzione che restituisce il numero di byte di
cui occorre incrementare s affinchè punti al carattere null '\0' :
unsigned len (const char * s)*/
unsigned int len(const char *s);
int main()
{
    const char * str1 = "Hi i am Nick s oeoe ";
    int result = len (str1);
    cout << "Il numero di byte necessario per puntare al carattere di terminazione e' di " << result  << " byte"; 
    
    return 0;
}
unsigned int len (const char *s)
{
    int count = 0;
    while(*s != '\0')
    {
        s++;
        count++;
    }
        return count;
}

