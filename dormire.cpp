#include <iostream> 
using namespace std;
int main ()
{
    for (int i =0 ; i<=4; i++)
    {
    for (int j=0; j<=4; j++)
    {
      if (((j==1 || j==3)  && (i== 0 || i==4)))
       cout << "    ";
       else if (((j==0 || j==4) && (i==1 || i == 3 ))) 
        cout << "    ";
        

       
       
       else cout << "  X "; 

         
    }
      cout<< endl;
      
    }










    return 0;
}