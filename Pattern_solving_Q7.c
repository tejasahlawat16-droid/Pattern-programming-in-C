#include <stdio.h>

int main() {
    int i, j;
    int n = 5;  // number of rows

    for (i = n; i >= 1; i--) {      // outer loop for rows
        for (j = 1; j <= i; j++) {  // inner loop for numbers
            printf("%d ", j);
        }
        printf("\n");  // move to next line
    }

    return 0;
}