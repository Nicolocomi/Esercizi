#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    unsigned long seed = time(NULL);
    cout << "Seed =  " << seed <<endl;
    srand(seed);
    for(int i=0; i<8; i++)
    { 
        cout<<rand() % 10 << endl;
    }
    



    return 0;
}