#include <iostream>
using namespace std;
// implementa strcat: concatena due stringhe
char * stringconcatena (char * stringa1 , char * stringa2)
{
    char * stringa3 = stringa1;
    while (*stringa1 != '\0')
    {
        stringa1++;
    }
    while (*stringa2 != '\0')
    {
        *stringa1 = *stringa2;
        stringa1++;
        stringa2++;
    }
    *stringa2 = '\0';
    return stringa3;
}

int main () 
{
    char s1[100] = "Hello, ";
    char s2[] = "world!";
    stringconcatena(s1, s2);
    cout << s1 << endl;
    return 0;


}




