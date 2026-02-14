//*****************************************************************************
// COMSC-210 | Lab 6 | Gabriel Marquez
// Description: this program takes a dynamically allocated double array and 
// outputs and sums it while utilizing pointer notation.
//*****************************************************************************

#include <iostream>
using namespace std;

const int SIZE = 5;

void enterArrayData(double *);
void outputArrayData(double *);
double sumArray(double *);

int main()
{
    //dynamically allocate a double array of size SIZE
    double *dptr = nullptr;
    dptr = new double[SIZE];

    //pass dynamic double array to the following functions
    enterArrayData(dptr);
    outputArrayData(dptr);
    double sum;
    sum = sumArray(dptr);

    //output sum of elements of dynamic double array
    cout << "Sum of values: " << sum;

    delete [] dptr; //being responsible with our memory
    return 0;
}

// enterArray() takes a dynamic double array and populates it with validated
// values that the user enters via the console.
// arguments: a dynamic double array
// returns: n/a
void enterArrayData(double *arr)
{
    cout << "Data entry for the array:" << endl;
    for (int i = 0; i < SIZE; ++i)
    {
        bool stop_loop = false;
        while (!stop_loop)
        {
            try
            {
                cout << "\t> Element #" << i << ": ";
                string entry;
                getline(cin, entry);
                *(arr + i) = stod(entry);
                stop_loop = true;
            }
            catch(const invalid_argument& e)
            {
                cerr << "Error: please enter a valid decimal or whole number." << endl;
            }
        }
    }
    cout << "Data entry complete." << endl;
}

// outputArrayData() receives a dynamic double array and outputs its contents 
// on one line.
// arguments: a dynamic double array
// returns: n/a
void outputArrayData(double *arr)
{
    cout << "Outputting array elements: ";
    for (int i = 0; i < SIZE; ++i)
        cout << *(arr + i) << " ";
    cout << endl;
}

// sumArray() receives a dynamic double array and both calculates and returns
// its sum.
// arguments: a dynamic double array
// returns: the sum of all elements of the dynamic double array
double sumArray(double *arr)
{
    double sum = 0;
    for (int i = 0; i < SIZE; ++i)
        sum += *(arr + i);

    return sum;
}