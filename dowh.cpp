#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
  int p;;
  cout << "Inserisci un intero :  ";
  cin >> p;
  int sum =0;
  int i =0;
    do 
  {
    sum = sum + (i*i);
    i++;
    cout << setw(4) << sum ;
  }
    while (i<=p );
    







    return 0;
}