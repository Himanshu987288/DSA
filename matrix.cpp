#include <iostream>
#include <climits>
using namespace std;

int matrixChainMultiplication(int p[], int n) {
    int m[n][n];

    
    for (int i = 1; i < n; i++) {// phle Initialize kiya diagonal ko = 0
        m[i][i] = 0;
    }

    
    for (int L = 2; L < n; L++) { // Chain length 
        for (int i = 1; i < n - L + 1; i++) {
            int j = i + L - 1;
            m[i][j] = INT_MAX;

            
            for (int k = i; k < j; k++) { // Find minimum cost
                int cost = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];

                if (cost < m[i][j]) {
                    m[i][j] = cost;
                }
            }
        }
    }

    return m[1][n-1];
}

int main() {
    int p[] = {5, 6, 4, 2, 3}; // Given dimensions
    int n = sizeof(p)/sizeof(p[0]);

    int result = matrixChainMultiplication(p, n);

    cout << "Minimum number of multiplications: " << result;

    return 0;
}