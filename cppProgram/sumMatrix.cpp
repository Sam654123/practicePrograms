#include "bits/stdc++.h"
#define rows 50
#define cols 50
using namespace std;

int N;

// Class for Matrix operator overloading
class Matrix
{

    // For input Matrix
    int arr[rows][cols];

public:
    // Function to take input to arr[][]
    void input(vector<vector<int>> &A);
    void display();

    // Functions for operator overloading
    void operator+(Matrix x);
};

// Functions to get input to Matrix
// array arr[][]
void Matrix::input(vector<vector<int>> &A)
{

    // Traverse the vector A[][]
    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < N; j++)
        {

            arr[i][j] = A[i][j];
        }
    }
}

// Function to display the element
// of Matrix
void Matrix::display()
{

    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < N; j++)
        {

            // Print the element
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}

// Function for addition of two Matrix
// using operator overloading
void Matrix::operator+(Matrix x)
{
    // To store the sum of Matrices
    int mat[N][N];

    // Traverse the Matrix x
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {

            // Add the corresponding
            // blocks of Matrices
            mat[i][j] = arr[i][j] + x.arr[i][j];
        }
    }

    // Display the sum of Matrices
    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < N; j++)
        {

            // Print the element
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
}

int main()
{

    // Dimension of Matrix
    N = 3;

    vector<vector<int>> arr1 = {{1, 2, 3},
                                {4, 5, 6},
                                {1, 2, 3}};

    vector<vector<int>> arr2 = {{1, 2, 3},
                                {4, 5, 16},
                                {1, 2, 3}};

    // Declare Matrices
    Matrix mat1, mat2;

    // Take Input to matrix mat1
    mat1.input(arr1);

    // Take Input to matrix mat2
    mat2.input(arr2);

    cout << "Matrix 1:" << endl;
    mat1.display();
    cout << "Matrix 2:" << endl;
    mat2.display();

    // For addition of matrix
    cout << "Addition of two given"
         << " Matrices is : \n";
    mat1 + mat2;

    return 0;
}
