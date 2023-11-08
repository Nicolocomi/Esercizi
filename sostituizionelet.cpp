#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
using namespace std;

/*Scrivere un programma che, dato in input il nome di un file
F e una lettera L, stampi a video il contenuto di quel file,
sostituendo ogni occorrenza della lettera L con il simbolo
“?” */
int main (int  argc , char * argv [])
{
    fstream myin;
    char charToReplace = *(argv[2]);
    if (argc != 3)
    {
        cerr << "Usage : ./a.out <filename> <char> \n" ;
        exit (0);
    }
    myin.open (argv[1], ios::in);
    if (myin.fail())
    {
        cerr << "Il file " << argv[1] << " non esiste \n ";
    }
    char c ;
    while (myin.get(c))
    {
        if (c == charToReplace )
        {
            cout << "?";
        }
        else cout << c ;
    }
    cout << endl;
    myin.close();
    
    return 0;
}
