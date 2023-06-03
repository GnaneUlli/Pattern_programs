#include <stdio.h>

void printDiamond(int n) {
    
    int i, j, space;

    
    for (i = 1; i <= n; i++) {
       
        for (space = 1; space <= n - i; space++) {
            
            printf(" ");
        }

        
        for (j = 1; j <= 2 * i - 1; j++) {
            
            printf("*");
        }

        printf("\n");
    }

    
    for (i = n - 1; i >= 1; i--) {
      
        for (space = 1; space <= n - i; space++) {
            
            printf(" ");
        }

        
        for (j = 1; j <= 2 * i - 1; j++) {
            
            printf("*");
        }

        printf("\n");
    }
}

int main() {
    
    int n;

    printf("Enter the number of rows : ");
    
    scanf("%d", &n);

    printDiamond(n);

    return 0;
}

