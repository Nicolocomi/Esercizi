#include <iostream>
using namespace std;
int divisione_ricorsiva (int dividendo, int divisore)
{
    if (divisore == 0 )
        return -1;
    else if (dividendo < divisore )
        return 0;
    return 1 + divisione_ricorsiva(dividendo - divisore,divisore);
}


int main ()
{
    int divid, divis;
    cin >> divid>> divis;
    cout << "La divisione e ' " << divisione_ricorsiva(divid, divis) << endl;










    return 0;
}