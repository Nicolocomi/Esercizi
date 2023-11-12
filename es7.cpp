#include <iostream>
#include <cstring> // Per strlen e strcpy
// !!GPT CODE !!
unsigned int len(const char *s);

int main()
{
    std::cout << "Inserisci una stringa: ";

    // Leggi la stringa inserita dall'utente
    char userInput[100]; // Limitiamo la lunghezza massima della stringa a 99 caratteri (più 1 per il terminatore null)
    std::cin.getline(userInput, sizeof(userInput));

    // Alloca dinamicamente una copia della stringa inserita
    char *dynamicStr = new char[strlen(userInput) + 1];
    strcpy(dynamicStr, userInput);

    // Calcola la lunghezza della stringa
    unsigned int result = len(dynamicStr);

    std::cout << "Il numero di byte che occorre incrementare affinché si punti al carattere null è: " << result << std::endl;

    // Libera la memoria allocata dinamicamente
    delete[] dynamicStr;

    return 0;
}

unsigned int len(const char *s)
{
    unsigned int count = 0;

    while (*s != '\0')
    {
        ++s;
        ++count;
    }

    return count;
}
