#include <iostream>
using namespace std ;
/*Scrivere la seguente funzione che copia i primi n byte che iniziano da *s2 nei byte che iniziano
da *s1, dove n è il numero di byte di cui occorre incrementare s2 affinchè punti al carattere NULL
void cpy (char * s1, const char * s2)
*/
unsigned len (const char * s2);
void cpy (char * s1 , const char * s2, int result);
int main ()
{
    const char * str1 = "Hey there !" ;
    char str2 [100];
    int result = len (str1);
    cout << "La stringa copiata e' : " ;
    cpy(str2, str1, result);





    return 0;
}
void cpy (char * s1, const char * s2, int result)
{
    for (int i = 0 ; i < result ; i++ )
    {
        s1[i] = s2 [i];
        cout << s1[i];
    }



}
unsigned int len (const char * s2)
{
    int count = 0;
    while(*s2 != '\0')
    {
        s2++;
        count++;
    }
        return count;
}