/*Una tecnica che spesso si applica ai dati contenuti in una matrice consiste nel sostituire a
ciascun elemento della matrice la media degli elementi che lo circondano. Tale tecnica è detta
filtro medio. In un filtro medio, ciascun elemento della matrice è sostituito dalla media dei
quattro elementi che si trovano sopra, sotto, a destra e a sinistra dell’elemento specificato. Ad
esempio, data la matrice A qui sotto, la matrice B è il risultato dell’applicazione del filtro
mediano semplificato alla matrice A:
Si scriva una funzione che riceva in input una matrice di numeri reali A di 10 righe e 10 colonne e
una matrice di numeri reali B delle stesse dimensioni di A. La funzione assegnerà a ogni elemento
della matrice B la media degli elementi che si trovano sopra, sotto, a destra e a sinistra
dell’elemento corrispondente della matrice A. Si testi la funzione tramite un main opportuno, che
inizializza A con numeri random compresi tra 0 e 9.*/
#include <iostream>
#include <cstdlib>
using namespace std;
const int dim = 4;
void printmatrix (float matrix[dim][]);
void filtro (float matrix[dim][]);
int main ()
{
    float matrix[dim][];
    cout << "La matrice e' : " << endl;
    printmatrix(matrix);
    cout << "La matrice con il filtro medio e ' : " << endl;

    
}
void printmatrix (float matrix[][])
{
    srand(time(NULL));
    for (int i = 0 ; i < dim ; i++ )
    {
        for (int j=0 ; j < dim; j++)
        {
            matrix[i][j] = rand () % 10;
            cout << matrix [i][j] << " ";
        }
    cout << endl;
    }
}
/*void filtro (float matrix [][])
{
    for (int i = 0 ;  ;)
    {
        for (int j = 0 ; j < dim ; j++ )
        {
             if (matrix[0][0])
            {
                cout << (matrix [0][1] + matrix [1][0]) / 2 ;
            }
                if (matrix [0][dim-1])
                {
                    cout << (matrix [0][dim-2] + matrix [1][dim-1]) / 2 ;
                }
        
        matrix [i][j]= (matrix [i][j-1] + matrix [i][j+1] + matrix [i+1][j]) / 3;
        }
    }*/
    /*for (int i = )
    if (matrix [dim-1][0])
    {
        cout << (matrix[dim-2][0] + matrix [dim-1][1]) / 2 ;
    }
    if (matrix [dim-1][dim-1])
    {
        cout << (matrix [dim-1][dim-2] + matrix [dim-2][dim-1]) / 2 ;
    }
}*/