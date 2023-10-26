#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void invertifor (int arr1[]);
const int dim = 14;
int main ()
{
    int arr1[dim];
    srand(time(NULL));
    for (int i =0; i<dim ; i++)
    {
        arr1[i]= rand()%13 ;
        cout << arr1[i] << " ";
    }
    cout <<endl;
    cout <<"L'array invertito e' : " << endl;
    invertifor(arr1);
    return 0;
}
void invertifor (int arr1[])
{
    for (int i =dim-1; i>=0 ; i--)
    {
        cout << arr1[i] << " ";
    }
}