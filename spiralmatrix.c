#include <stdio.h>
//define function to print elements of 2D array in spiral order
/*here :
RowStart is the first row index
ColStart is the first column index
RowEnd is the last row index
ColEnd is the last columns index*/

void spiral_order(int m, int n, int A[50][50]) {
    int i, RowStart = 0, ColStart = 0, RowEnd = m - 1, ColEnd = n - 1;
    //while loop to traverse matrix in spiral order
    while (RowStart <= RowEnd && ColStart <= ColEnd) {
        //traverse the first row from left to right,if row left
        for (i = ColStart; i <= ColEnd; i++) {
            printf("%d ", A[RowStart][i]);
        }
        RowStart++;
        //traverse rightmost column from top to bottom,if column left
        for (i = RowStart; i <= RowEnd; i++) {
            printf("%d ", A[i][ColEnd]);
        }
        ColEnd--;
        //traverse last row from right to left,if row left
        if (RowStart <= RowEnd) {
            for (i = ColEnd; i >= ColStart; i--) {
                printf("%d ", A[RowEnd][i]);
            }
        RowEnd--;
        }
        //traverse leftmost column from bottom to top ,if column left
        if (ColStart <= ColEnd) {
            for (i = RowEnd; i >= RowStart; i--) {
                printf("%d ", A[i][ColStart]);
            }
        ColStart++;
        }
    }
}

int main() {
    int A[50][50], m, n, i, j;
    printf("Enter the number of rows (m) you would like to have:");
    scanf("%d", &m);
    printf("\nEnter the number of columns (n) you would like to have:");
    scanf("%d",&n);
    //user-input matrix elements
    printf("\nEnter elements of the matrix:\n");
    for (i = 0 ; i < m ; i++) {
        for (j = 0 ; j < n ; j++) {
            scanf( "%d", &A[i][j] ) ;
        }
    }
    //display the matrix 
    printf("Matrix elements:\n");
    for (i = 0 ; i < m ; i++) {
        for (j = 0 ; j < n ; j++) {
            printf( "%d ", A[i][j] );
        }
        printf("\n");
    }
    //call spiral_order function to get spiral matrix
    printf("Spiral order is: ");
    spiral_order(m, n, A);
    return 0;
}