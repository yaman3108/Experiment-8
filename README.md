# Experiment 8



## Aim:
To study and implement C++ 2D array matrices


## Apparatus:
Vs Code, Github


## Theory:

In  C++ 2d arrays are used to represent matrices. These matrices are used to manipulate data in a structured form. A matrix is a collection of elements arranged in the form of rows and coloumns.

### Declaration of a matrix: -

The format used for matrix initialization in C++ is as follows

int Name[number of rows][number of coloumns] = {elements of the matrix};

### Initialization of a matrix: -

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

### Accessing elements of a matrix: -

int value = matrix[1][2];

### Addition of  a matrix:

In order to add two matrices in C++:
1: Both matrices must have the same dimensions.
2: Define two 2D arrays representing the matrices to be added.
3: Create a third 2D array to store the result of the addition.
4: Use nested loops to iterate over each element of both matrices, adding corresponding elements together.
5: Store the sum of corresponding elements from the two matrices in the result matrix.

### Substraction of a matrix:

In order to subtract two matrices in C++:
1: Both matrices must have the same dimensions.
2: Define two 2D arrays representing the matrices to be subtracted.
3: Create a third 2D array to store the result of the addition.
4: Use nested loops to iterate over each element of both matrices, subtract corresponding elements.
5: Store the difference of corresponding elements from the two matrices in the result matrix.

### Multiplication of a matrix:

1: Ensure the number of columns in the first matrix equals the number of rows in the second matrix.
2: Create a matrix with dimensions of rows from the first matrix and columns from the second matrix.
3: Perform Multiplication:
  - Iterate through rows of the first matrix.
  - Iterate through columns of the second matrix.
  - Compute the dot product of the current row and column.
  - Store the result in the corresponding position in the result matrix.

### Transpose of a matrix:

1: Initialize a matrix with dimensions swapped.
2:Assign Values:
  - Iterate through the original matrix’s columns.
  - For each column, iterate through its rows.
  - Assign values to the new matrix based on the current column and row indices.

## Code:

### Entering the elements of a matrix:
```
#include<iostream>
using namespace std;
int main()
{
    int temp[3][3],i,j,k,l;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"enter element- ("<<i<<j<<"): ";
            cin>>temp[i][j];
        }
    }
    for(k=0;k<3;k++)
    {
        for(l=0;l<3;l++)
        {
            cout<<temp[k][l];
            cout<<" ";
        }
    }    
    return 0;
}
```
### Output:
![Screenshot 2024-09-02 112405](https://github.com/user-attachments/assets/4e7c06d9-4aae-4de3-882f-a025b873dc28)

### Addition of two matrix:
```
#include <iostream>
using namespace std;
int main() 
{
    int r1 = 3, c1 = 3;
    int r2 = 3, c2 = 3;

    int m1[r1][c1], m2[r2][c2], sum[r1][c1];

    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < r1; ++i) 
    {
        for (int j = 0; j < c1; ++j) 
        {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> m1[i][j];
        }
    }
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < r2; ++i) 
    {
        for (int j = 0; j < c2; ++j) 
        {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> m2[i][j];
        }
    }

    for (int i = 0; i < r1; ++i) 
    {
        for (int j = 0; j < c1; ++j) 
        {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }
 

    cout << endl << "Sum of matrices:" << endl;
    for (int i = 0; i < r1; ++i) 
    {
        for (int j = 0; j < c1; ++j) 
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```
### Output:
![Screenshot 2024-09-02 112539](https://github.com/user-attachments/assets/084e4190-0983-4926-976b-5ac4f85fa78b)

### Substraction of two matrix:
```
#include <iostream>
using namespace std;
int main() 
{
    // Define matrix dimensions
    int r1 = 3, c1 = 3;
    int r2 = 3, c2 = 3;

    int m1[r1][c1], m2[r2][c2], sum[r1][c1];

    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < r1; ++i) 
    {
        for (int j = 0; j < c1; ++j) 
        {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> m1[i][j];
        }
    }
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < r2; ++i) 
    {
        for (int j = 0; j < c2; ++j) 
        {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> m2[i][j];
        }
    }

    for (int i = 0; i < r1; ++i) 
    {
        for (int j = 0; j < c1; ++j) 
        {
            sum[i][j] = m1[i][j] - m2[i][j];
        }
    }
 

    cout << endl << "difference of matrices:" << endl;
    for (int i = 0; i < r1; ++i) 
    {
        for (int j = 0; j < c1; ++j) 
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```
### Output:
![Screenshot 2024-09-02 112744](https://github.com/user-attachments/assets/ed356d3c-0e76-419c-b8e3-1f72fab0d767)

### Multiplication of two matrix:
```
#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    
    // Input dimensions of the first matrix
    cout << "Enter rows and columns for the first matrix: ";
    cin >> r1 >> c1;

    // Input dimensions of the second matrix
    cout << "Enter rows and columns for the second matrix: ";
    cin >> r2 >> c2;

    // Check if matrix multiplication is possible
    if (c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    // Define the matrices
    int m1[r1][c1], m2[r2][c2], result[r1][c2];

    // Input elements of the first and second matrix
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> m1[i][j];
        }
    }
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> m2[i][j];
        }
    } 
    // Initialize the result matrix with zeros
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // Display the result
    cout << "Resultant matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```
### Output:
![Screenshot 2024-09-02 113121](https://github.com/user-attachments/assets/51bb7fd0-6376-4592-a9b7-c0fd74244818)

## Transpose of a matrix:
```
#include <iostream>
using namespace std;

int main() {
    int r, c ;

    // size of the matrix
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> r  >> c ;

    int m[r][c], transpose[c][r];

    // elements of the matrix
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> m[i][j];
        }
    }

    // transpose of the matrix
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            transpose[j][i] = m[i][j];
        }
    }

    // printing the transposed matrix
    cout << "\nTranspose of the matrix:" << endl;
    for(int i = 0; i < c; ++i) {
        for(int j = 0; j < r; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```
### Output:
![Screenshot 2024-09-02 113238](https://github.com/user-attachments/assets/f85f9a42-bef3-41aa-9c33-8065af6fcdea)

## Diagonal addition of a matrix:
```
#include <iostream>
using namespace std;


const int MAX = 100;

void DiagonalSum(int mat[][MAX], int n) 
{ 
    int principal = 0;
    
    for (int i = 0; i < n; i++)  
    { 
        // Condition for principal diagonal 
        principal += mat[i][i]; 
    } 
  
    cout << "Sum of the diagonal elements is: " << principal << endl; 
} 

int main() 
{ 
    int a[][MAX] = {{1, 2, 3, 4},  
                    {5, 6, 7, 8},  
                    {1, 2, 3, 4},  
                    {5, 6, 7, 8}}; 
    DiagonalSum(a, 4); 
return 0;
}
```
### Output:
![Screenshot 2024-09-02 113340](https://github.com/user-attachments/assets/de07fdbe-e3c0-4ba5-b85d-ae860cd35b84)


## Conclusion:
This program helps us understand how matrices work in C++. Working with 2D arrays in C++ also provides an understanding of how memory is allocated and accessed in programming, especially in managing rows and columns of data.
