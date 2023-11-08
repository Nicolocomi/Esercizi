#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int righe = 10;
const int colonne = 10;

void applicaFiltroMedio(double matriceA[righe][colonne], double matriceB[righe][colonne]) {
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            double somma = 0.0;
            int conteggio = 0;
            
            if (i > 0) {
                somma += matriceA[i - 1][j];
                conteggio++;
            }
            if (i < righe - 1) {
                somma += matriceA[i + 1][j];
                conteggio++;
            }
            if (j > 0) {
                somma += matriceA[i][j - 1];
                conteggio++;
            }
            if (j < colonne - 1) {
                somma += matriceA[i][j + 1];
                conteggio++;
            }
            
            matriceB[i][j] = somma / conteggio;
        }
    }
}

int main() {
    double matriceA[righe][colonne];
    double matriceB[righe][colonne];
    
    // Inizializza il generatore di numeri casuali
    srand(time(NULL));
    
    // Inizializza matriceA con numeri casuali compresi tra 0 e 9
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            matriceA[i][j] = static_cast<double>(rand() % 10);
        }
    }

    cout << "Matrice A:" << endl;
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            cout << matriceA[i][j] << " ";
        }
        cout << endl;
    }

    applicaFiltroMedio(matriceA, matriceB);

    cout << "\nMatrice B (risultato del filtro medio):" << endl;
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            cout << matriceB[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
