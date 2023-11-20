#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
using namespace std;

struct dataStruct    // Gestisce l'array dinamico di interi
{
    int* data;
    int size = 10, numData;
    
};

void ResizeArray (dataStruct& orig, int resize);
void insertInBucket (dataStruct* bucket , int newItem);
void removeFromBucket (dataStruct* bucket, int index);

int main ()
{
    dataStruct dinamic_array;
    int resize ;
    int newItem ;
    
    
    dinamic_array.data = new int [dinamic_array.size];


    for (int i = 0 ; i < dinamic_array.size ; i++)
    {
        dinamic_array.data[i]= i;    
        dinamic_array.numData++;
    
    }

    
    cout << "Inserisci nuova dimensione dell' array " << endl;
    cin >> resize;
    cout << "L'array ridimensionato e': " << endl;

    ResizeArray (dinamic_array,resize);

    cout << "Inserisci l'elemento che vuoi aggiungere : " << endl;
    cin >> newItem;

    insertInBucket (&dinamic_array,newItem);

    delete [] dinamic_array.data;

    return 0;
}
void ResizeArray(dataStruct& orig, int resize)
{
    int* newData = new int[resize];

    for (int i = 0; i < resize; i++)
    {
        if (i < orig.size)
        {
            newData[i] = orig.data[i];
        }
        else
        {
            newData[i] = 0;
        }
        cout << newData[i] << " ";
    }

    delete[] orig.data; // Release memory of the old array
    orig.data = newData; // Update the pointer to the new array
    orig.size = resize;  // Update the size of the structure
    orig.numData = resize; // Assuming you want to update the numData as well 

   if (resize > orig.size)
    {
        orig.numData += resize - orig.size;
    }
}
void insertInBucket (dataStruct* bucket , int newItem)
{
    
    if (bucket->size == bucket->numData)
    {
        ResizeArray(*bucket, bucket->size +1);
    }
    bucket->data[bucket->numData]= newItem;
    bucket->numData++;
    

}


