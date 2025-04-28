#include <stdio.h>
#include <stdbool.h>

#define N 8 // Change this value for different board sizes

// Function to print the row indices of queens
void printPositions(int board[N][N]) {
    printf("Queen positions: ");
    for (int col = 0; col < N; col++) {
        for (int row = 0; row < N; row++) {
            if (board[row][col] == 1) {
                printf("%d", row + 1); // Add 1 to make it 1-based indexing
                if (col < N - 1) {
                    printf(", ");
                }
                break;
            }
        }
    }
    printf("\n");
}

// Function to check if a queen can be placed at board[row][col]
bool isSafe(int board[N][N], int row, int col) {
    // Check this row on the left
    for (int i = 0; i < col; i++) {
        if (board[row][i]) {
            return false;
        }
    }

    // Check upper diagonal on the left
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j]) {
            return false;
        }
    }

    // Check lower diagonal on the left
    for (int i = row, j = col; j >= 0 && i < N; i++, j--) {
        if (board[i][j]) {
            return false;
        }
    }

    return true;
}

// Modify the recursive function to explore all possibilities:
void solveNQueenUtil(int board[N][N], int col, int *solutionCount) {
    if (col >= N) {
        printPositions(board);
        (*solutionCount)++;
        printf("\n"); // separate each solution
        return;
    }
    for (int i = 0; i < N; i++) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1;
            solveNQueenUtil(board, col + 1, solutionCount);
            board[i][col] = 0;
        }
    }
}

// Modify the main solving function to use the new recursive function:
bool solveNQueen() {
    int board[N][N] = {0};
    int solutionCount = 0;

    solveNQueenUtil(board, 0, &solutionCount);

    if (solutionCount == 0) {
        printf("Solution does not exist\n");
        return false;
    }
    printf("Total solutions: %d\n", solutionCount);
    return true;
}

int main() {
    solveNQueen();
    return 0;
}
