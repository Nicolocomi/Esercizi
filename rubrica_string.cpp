#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        cout << "Usage: ./a.out <file input> <file output>" << endl;
        exit(0);
    }

    ifstream myinput;
    ofstream myoutput;
    myinput.open(argv[1]);
    if (myinput.fail())
    {
        cerr << "Il file non esiste !!" << endl;
        exit(0);
    }

    char fullname[100];

    myoutput.open(argv[2]);

    if (myoutput.fail())
    {
        cerr << "Il file non esiste !!" << endl;
        exit(0);
    }

    while (myinput.getline(fullname, 100))
    {
        int spacePos = -1;
        for (int i = 0; i < strlen(fullname); i++)
        {
            if (fullname[i] == ' ')
            {
                spacePos = i;
                break;
            }
        }

        if (spacePos != -1)
        {
            char cognome[50];
            char nome[50];

            strncpy(cognome, fullname, spacePos);
            cognome[spacePos] = '\0';

            strcpy(nome, fullname + spacePos + 1);

            // Ottieni l'iniziale del secondo nome
            char iniziale = nome[0];

            myoutput << cognome << ", " << iniziale << "." << endl;
        }
    }

    myinput.close();
    myoutput.close();

    return 0;
}
