/*Scrivere un programma che, dati due interi in input (righe e colonne), crei
dinamicamente una matrice e la riempia con valori interi random (è concesso
l’uso della funzione rand() nella libreria <cstdlib>). In seguito, chiedere
all’utente le dimensioni della sottomatrice da stampare. Le dimensioni sono
fornite tramite quattro numeri, corrispondenti alle coordinate del primo
elemento (2 numeri) e alle dimensioni della sottomatrice (numero di righe e
colonne). Se le dimensioni fornite dall’utente eccedono quelle della matrice,
stampare la sottomatrice massima disponibile. Deallocare infine la matrice.
*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main ()
{
    srand(time(NULL));
    int righe, colonne ;
    cout << "N. righe " << endl;
    cin >> righe;
    cout << "N. colonne " << endl;
    cin >> colonne;
    int ** matrix = new int * [righe];
    for (int i = 0 ; i < righe ; i++)
    {
        matrix[i] = new int [colonne];
        for (int j = 0 ; j < colonne ; j++)
        {
            matrix [i][j] = rand() % 10 ;
        }
    }
    cout << "Matrice generata:\n";
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    int startX, startY , dimRow, dimCol;
    cout << "Coordinate primo elemento della sottomatrice : " << endl;
    cin >> startX >> startY;
    cout << "Inserisci dimensione della sottomatrice " << endl;
    cin >> dimRow >> dimCol;
    cout << "La sottomatrice e' : " << endl; 
    for (int i = startX ; i < startX+dimRow && i < righe ; i++)
    {
        for (int j = startY ; j < startY+dimCol && j < colonne ; j++){
        cout << matrix [i][j] << " ";
        }
        cout << endl;
    }

}