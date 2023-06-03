#include <stdio.h>

void printMirrorHollowParallelogram(int rows, int cols) {
  
    int i, j;

    for (i = 1; i <= rows; i++) {
        
        for (j = 1; j <= rows - i; j++) {
          
            printf(" ");
        }

        
        if (i == 1 || i == rows) {
          
            for (j = 1; j <= cols; j++) {
              
                printf("*");
            }
        }
        else {
            
            printf("*");
          
            for (j = 1; j <= cols - 2; j++) {
              
                printf(" ");
            }
          
            printf("*");
        }

        printf("\n");
    }
}

int main() {
  
    int rows, cols;

    printf("Enter the number of rows: ");
  
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
  
    scanf("%d", &cols);

    printMirrorHollowParallelogram(rows, cols);

    return 0;
}
