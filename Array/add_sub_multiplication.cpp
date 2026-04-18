void multiplyMatrices(int r1, int c1, int r2, int c2, int A[10][10], int B[10][10], int Result[10][10]) {
    // Initializing result matrix with 0
    for(int i = 0; i < r1; ++i)
        for(int j = 0; j < c2; ++j)
            Result[i][j] = 0;

    // Multiplication logic
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                Result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}