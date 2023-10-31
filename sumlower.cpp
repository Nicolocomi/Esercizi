#include <iostream>
#include <cstdlib>
using namespace std;
const int dim = 3;
void print_matrix ( int matrix[][dim])
{
    srand(time(NULL));
    for (int i =0; i<dim; i++)
        {
            for (int j=0; j<dim; j++)
            {
            matrix[i][j]=rand()%10;
            cout << matrix[i][j] << " ";
            }
        cout << endl;
        }
}

void sumuppertriangular (int matrix[][dim]);
void sumlowertriangular (int [][dim]);
int main()
{
    int matrix[dim][dim];
    print_matrix(matrix);
    cout << endl;
    sumuppertriangular(matrix);
    cout << endl;
    sumlowertriangular(matrix);
    cout <<endl;

}
/*Scrivere un programma che dichiari e poi inizializzi (con valori
random) una matrice quadrata di interi, la stampi a video,
calcoli la somma degli elementi nel triangolo superiore della
matrice e la stampi a video.*/
void sumlowertriangular (int matrix[][dim])
{
    int sum= 0 ;
    for (int i =dim-1; i>=0; i--)
    {
        for (int j=i; j>=0; j--)
        {    
        sum = sum + matrix[i][j];
        }  
    }
        cout << sum ;  
}
void sumuppertriangular (int matrix[][dim])
{

    int sum = 0;
    for (int i = 0 ; i < dim ; i++)
    {
        for (int j=i; j<dim ; j++) // STAMPA SOMMA TRIANGOLARE INFERIORE ;
        {
        sum= sum + matrix[i][j];
        }
    }
        cout << sum ;
}