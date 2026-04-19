#include<bits/stdc++.h>
using namespace std;
int main() {
    // 1. Define a 2D Array (3 Rows, 3 Columns)
    int rows = 3;
    int cols = 3;
    int matrix[3][3] = {
        {10, 11, 12}, // Group 1
        {20, 21, 22}, // Group 2
        {30, 31, 32}  // Group 3
    };

    // 2. Create a Linear Array (1D)
    // The length is UB - LB + 1 [cite: 18]
    int totalElements = rows * cols;
    int linearArray[9]; 

    // 3. Copy elements (Row-major order)
    int index = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            linearArray[index] = matrix[i][j];
            index++;
        }
    }

    // 4. Print the elements of Group 3 from the 1D array
    // Group 3 starts after the first two rows (index = 2 * cols)
    cout << "Elements of Group 3 from the Linear Array: " << std::endl;
    
    int start = 2 * cols; // Starting index for the 3rd row
    int end = start + cols;

    for (int k = start; k < end; k++) {
        cout << linearArray[k] << " ";
    }

    return 0;
}