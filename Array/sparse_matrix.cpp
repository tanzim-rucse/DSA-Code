#include<bits/stdc++.h>
using namespace std;

int main() {
    int A[3][3] = {
        {10, 0,  0},
        {20, 30, 0},
        {40, 50, 60}
    };
    // 2. Store non-zero elements into 1D array B
    // Total elements for 3x3 = (3*(3+1))/2 = 6
    std::vector<int> B;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <= i; j++) {
            B.push_back(A[i][j]);
        }
    }

    int i = 3, j = 2;
    int indexB = (i * (i - 1) / 2) + (j - 1);
    std::cout << "Calculated Index in B: " << indexB << std::endl;

    return 0;
}