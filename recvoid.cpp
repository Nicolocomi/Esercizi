#include <iostream>
using namespace std;
int Stampabinario (int n )
{        // 345%2= 1  172%2=0 86%2 = 0 43 %2= 1 21%2 = 1  10 %2 =0 5%2=1 2%2=0 1%2= 1     101011001
    
    if (n == 0) {
        return 0;
    } else {
        return n%2 + 10 * Stampabinario(n/2); 
    }
     
}

int main ()
{
    int n ;
    cin >> n ;
    cout << "Il numero in binario e ':  " << Stampabinario(n) <<endl;






    return 0;
}