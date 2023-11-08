#include <iostream>
#include <cstdlib>
using namespace std;

/*Scrivere un programma che dichiari e poi inizializzi (con valori
random) una matrice di interi, la stampi a video, calcoli la
matrice trasposta e la stampi a video.*/
const int dim1=6;
const int dim2=6;
void print_matrix ( int matrix[][dim2])
{
    srand(time(NULL));
    for (int i =0; i<dim1; i++)
        {
            for (int j=0; j<dim2; j++)
            {
            matrix[i][j]=rand()%10;
            cout << matrix[i][j] << " ";
            }
        cout << endl;
        }
}
void transpose (int matrix[][dim2]);

int main ()
{
    int matrix[dim1][dim2];
    print_matrix(matrix);
    cout <<endl;
    transpose(matrix);
    cout <<endl;
    return 0;
}
void transpose (int matrix[][dim2])
{   
    for (int i = 0; i<dim2; i++)     
    {
        for (int j=0 ; j<dim1; j++)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}