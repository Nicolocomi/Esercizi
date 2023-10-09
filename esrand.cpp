#include <iostream>
#include <cstdlib>
using namespace std;
int main ()
{
    for(int i=0; i<8; i++)
    { //STAMPA I NUMERI PSEUDO CASUALI
        cout<<rand()<< endl;
    }
    cout << "RAND_MAX =      " << RAND_MAX << endl;



    return 0;
}