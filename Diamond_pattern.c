#include <stdio.h>

void printDiamond(int n) {
    int i, j, space;

    // Print upper half of the diamond
    for (i = 1; i <= n; i++) {
        // Print spaces before the star
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Print lower half of the diamond
    for (i = n - 1; i >= 1; i--) {
        // Print spaces before the star
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of rows (odd): ");
    scanf("%d", &n);

    printDiamond(n);

    return 0;
}

