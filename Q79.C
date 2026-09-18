#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = 3;
    int i, j, k;

    // Traverse diagonals
    for (k = 0; k < 2 * n - 1; k++) {

        if (k % 2 == 0) {
            // Traverse upward
            for (i = (k < n ? k : n - 1);
                 i >= 0 && k - i < n;
                 i--) {

                j = k - i;
                printf("%d ", matrix[i][j]);
            }
        } else {
            // Traverse downward
            for (i = (k < n ? 0 : k - n + 1);
                 i < n && k - i >= 0;
                 i++) {

                j = k - i;
                printf("%d ", matrix[i][j]);
            }
        }
    }

    return 0;
}
