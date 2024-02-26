// cprogram for print diamond

#include <stdio.h>
void printDiamond(int n) {
    int i, j;

    
    for (i = 0; i < n; i++) {
        // Print spaces
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Print asterisks
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }

        printf("\n");
    }

   
    for (i = n - 2; i >= 0; i--) {
        // Print spaces
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Print asterisks
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }

        printf("\n");
    }
}
int main() {
    int rows;

    printf("Enter the number of rows for the diamond: ");
    scanf("%d", &rows);

    if (rows % 2 == 0) {
        printf("Please enter an odd number for a symmetric diamond.\n");
        return 1;
    }

    printDiamond(rows);

    return 0;
}
