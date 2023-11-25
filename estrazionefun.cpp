#include "estrazioneheader.hpp"
#include <iostream>
#include <cstring>
/*estraiamo le lettere maiuscole nella stringa assumendo come da
consegna che la stringa sia senza spazi*/ 
void recEstrai (char * stringa1, char * Buffer)
{
    if (*stringa1 == '\0')
    return;
    if ((*stringa1 >= 'A') && (*stringa1 <= 'Z'))
    {
        strncat(Buffer, stringa1, 1);
    }
    recEstrai (stringa1 + 1, Buffer) ;
}