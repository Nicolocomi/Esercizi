#include <iostream>
using namespace std;
int max(int x , int y )
{
    if (x<y) return y;
    else return x;
}

int main ()
{
    int m, n;
    do
    {
        cin >> m;
        cin>> n;
        cout << "Il max tra " << m << "  e  " << n << " è " << max(m,n) << endl;
    }
    while (m!=0);






    return 0;
}