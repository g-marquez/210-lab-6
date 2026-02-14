//*****************************************************************************
// COMSC-210 | Lab 6 | Gabriel Marquez
// Description: this program takes a dynamically allocated double array and 
// outputs and sums it while utilizing pointer notation.
//*****************************************************************************

#include <iostream>
using namespace std;

const int SIZE = 5;

void enterArray(double *);
void outputArray(double *);
double sumArray(double *);

int main()
{
    double *dptr = nullptr;
    dptr = new double[SIZE];

    enterArray(dptr);

    return 0;
}

// enterArray() dynamically allocates a double array of size SIZE and 
// populates it with values that the user enters via the console.
// arguments: n/a
// returns: n/a
void enterArray(double *arr)
{
    cout << "Data entry for the array:" << endl;
    for (int i = 0; i < SIZE; ++i)
    {
        cout << "\t> Element #" << i << ": ";
        cin >> 
    }
}