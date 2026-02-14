//*****************************************************************************
// COMSC-210 | Lab 6 | Gabriel Marquez
// Description: this program takes a dynamically allocated double array and 
// outputs and sums it while utilizing pointer notation.
//*****************************************************************************

#include <iostream>
using namespace std;

const int SIZE = 5;

double* enterArray();
void outputArray(double *);
double sumArray(double *);

int main()
{
    double *dptr = nullptr;
    dptr = new double[SIZE];

    dptr = enterArray();

    return 0;
}

double* enterArray()
{
    cout << "Data entry for the array:" << endl;
    for (int i = 0; i < SIZE; ++i)
    {
        cout << "\t> Element #" << i << ": ";
        cin >> 
    }
}