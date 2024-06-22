#include <stdio.h>

#define MAX_R 5
#define MAX_C 5

void findFreeAreas(int matrix[MAX_R][MAX_C], int rows, int cols, int row, int col) {
    printf("Free Areas around (%d, %d):\n", row, col);

    if (row >= 0 && row < rows && col >= 0 && col < cols && matrix[row][col] == 1) {
        if (row > 0 && matrix[row - 1][col] == 1) {
            printf("(%d, %d) - Up\n", row-1, col);
        }
        if (row < rows - 1 && matrix[row + 1][col] == 1) {
            printf("(%d, %d) - Down\n", row+1, col);
        }
        if (col > 0 && matrix[row][col - 1] == 1) {
            printf("(%d, %d) - Left\n", row, col-1);
        }
        if (col < cols - 1 && matrix[row][col + 1] == 1) {
            printf("(%d, %d) - Right\n", row, col+1);
        }
    } else {
        printf("The given coordinate is either a wall or not a valid position in the matrix.\n");
    }
}

int main() {
    int matrix[MAX_R][MAX_C];
    int rows, cols;


    printf("Enter the number of rows and columns for the matrix (up to %d x %d): ", MAX_R, MAX_C);
    scanf("%d %d", &rows, &cols);

    // Get user input for the matrix elements
    printf("Enter the matrix elements (0 for walls, 1 for free areas):\n");
    for (int i = 0; i < rows; i++) {
    	printf("Enter data for Row %d:\n ",i+1);
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
        
    }


    printf("The matrix you entered:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    char choice;
    do {
        int userRow, userCol;
        printf("Enter the row and column for the coordinate(0,0 as start): ");
        scanf("%d %d", &userRow, &userCol);

        findFreeAreas(matrix, rows, cols, userRow, userCol);

        printf("Do you want to enter another coordinate? (y/n): ");
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

