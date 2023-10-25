#include <iostream>
#include <cmath>
using namespace std;
float average(float a, float b, float c, float d)
{
    float media = (a+b+c+d) / 4 ;
    return media;
}
int main()
{
    float x, y,z,w;
    cin >> x >> y >> z >> w ;
    cout << "La media tra questi 4 numeri e' : " << average (x,y, z,w )<< endl;
    return 0;
}