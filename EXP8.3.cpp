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
