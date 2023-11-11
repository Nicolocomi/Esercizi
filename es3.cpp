#include <iostream>
using namespace std;
/*Scrivere una funzione cui viene passato un array di n puntatori a float e che
ne restituisce un array di nuova creazione che contiene gli n valori a float*/
float *extractFloats(float **arrOfPointers, int n);

int main() {
    int n;
    cout << "Inserisci il numero di puntatori a float: ";
    cin >> n;

    float *arrOfFloats[n];
    cout << "Inserisci " << n << " valori float, uno per riga:" << endl;

    for (int i = 0; i < n; i++) {
        arrOfFloats[i] = new float;  // Allocazione di memoria per ciascun float
        cin >> *(arrOfFloats[i]);
    }

    float *extractedFloats = extractFloats(arrOfFloats, n);

    cout << "Array di float estratto: ";
    for (int i = 0; i < n; i++) {
        cout << extractedFloats[i] << " ";
    }

    // Deallocazione della memoria
    for (int i = 0; i < n; i++) {
        delete arrOfFloats[i];
    }

    delete[] extractedFloats;

    return 0;
}

float *extractFloats(float **arrOfPointers, int n) {
    float *arrOfFloats = new float[n];

    for (int i = 0; i < n; i++) {
        arrOfFloats[i] = *(arrOfPointers[i]);
    }

    return arrOfFloats;
}
