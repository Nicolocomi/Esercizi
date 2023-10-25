#include <iostream>
using namespace std;
void printDate(int, int ,int);
int main ()
{
    int month, day, year;
    do
    {
        cin >> month >> day >> year ;
        printDate(month, day, year);
    }
        while (month > 0);
    return 0;
}
void printDate (int m, int d, int y)
{
    if (m<1 || m>12 ||d<1 || d >31 || y<0 )
    {
        cerr << "Formato non valido !";
        return;
    }
switch (m)
{
    case 1: cout << "January ";
    break;
    case 2: cout << "February ";
    break;
    case 3: cout << "Marc";
    break;
    case 4: cout << "Apr ";
    break;
    case 5: cout << "may ";
    break;
    case 6: cout << "June ";
    break;
    case 7: cout << "July ";
    break;
    case 8: cout << "Aug ";
    break;
    case 9: cout << "Sept ";
    break;
    case 10: cout << "Oct ";
    break;
    case 11: cout << "NOV ";
    break;
    case 12: cout << "Dece ";
    break;
}
    cout << d << ",  " << y <<endl;


}

