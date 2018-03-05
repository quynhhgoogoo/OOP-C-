//A program which uses dynamic memory allocation functions for reserving memory for two matrix variables,
//calculates their multiplication and prints the result to the standard output
#include <iostream>
#include <cmath>
#include <new>
using namespace std;

int main() {
	
int i,j, k, c1, r1, r2, c2;
int mult[10][10];
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;
	// If column of first matrix in not equal to row of second matrix,
    // ask the user to enter the size of matrix again.
    while (c1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second.";

        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }
		int **m1 = new int*[r1];
	for(int i = 0; i < r1; ++i)
		m1[i] = new int[c1];
	int **m2 = new int*[r2];
	for(int i = 0; i < r2; ++i)
		m2[i] = new int[c2];
	// Storing elements of first matrix.
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element m1" << i + 1 << j + 1 << " : ";
            cin >> m1[i][j];
        }

    // Storing elements of second matrix.
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element m2" << i + 1 << j + 1 << " : ";
            cin >> m2[i][j];
        }

    // Multiplying matrix a and b and storing in array mult.
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] = m1[i][k] * m2[k][j];
            }

    // Displaying the multiplication of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c2; ++j)
    {
        cout << " " << mult[i][j];
        if(j == c2-1)
            cout << endl;
    }
 delete [] m1;
 delete [] m2;
 return 0;

 }
