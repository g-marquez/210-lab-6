//*****************************************************************************
// COMSC-210 | Lab 6 | Gabriel Marquez
// Description: this program takes a dynamically allocated double array and 
// outputs and sums it while utilizing pointer notation.
//*****************************************************************************

#include <iostream>
using namespace std;

const int SIZE = 5;

void enterArray(double *);
void outputArrayData(double *);
double sumArray(double *);

int main()
{
    double *dptr = nullptr;
    dptr = new double[SIZE];

    enterArray(dptr);
    outputArrayData(dptr);

    delete [] dptr;
    return 0;
}

// enterArray() takes a dynamic double array and populates it with values that
// the user enters via the console.
// arguments: a double array pointer
// returns: n/a
void enterArray(double *arr)
{
    cout << "Data entry for the array:" << endl;
    for (int i = 0; i < SIZE; ++i)
    {
        cout << "\t> Element #" << i << ": ";
        cin >> *(arr + i);
    }
    cout << "Data entry complete." << endl;
}

// outputArrayData() receives a dynamic double array and outputs its contents 
// on one line.
// arguments: a double array pointer
// returns: n/a
void outputArrayData(double *arr)
{
    cout << "Outputting array elements: ";
    for (int i = 0; i < SIZE; ++i)
        cout << *(arr + i) << " ";
}