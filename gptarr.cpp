#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void inverti(int arr1[], int start, int end)                   
{
    if (start >= end)
    {
        return;
    }
    
    int temp = arr1[start];
    arr1[start] = arr1[end];
    arr1[end] = temp;

    inverti(arr1, start + 1, end - 1);
}

const int dim = 14;

int main()
{
    int arr1[dim];
    srand(time(NULL));

    for (int i = 0; i < dim; i++)
    {
        arr1[i] = rand() % 12;
        cout << arr1[i] << "   ";
    }

    cout << endl;
    cout << "Ora l'array invertito è: ";
    inverti(arr1, 0, dim - 1);
    for (int i = 0; i < dim; i++)
    {
        cout << arr1[i] << "   ";
    }

    return 0;
}