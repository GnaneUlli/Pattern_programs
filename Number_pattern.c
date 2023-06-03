#include <stdio.h>

int main() {

    int n = 4;
    
    int pc = 1;
    
    for (int x = 1; x <= n; x++) {
    
        for (int y = n-1; y >= x; y--) {
        
            printf(" ");
        }
        for (int z = x-1; z >= -x+1; z--) {
        
            printf("%d", pc - abs(z));
        }
        pc += 2;
        
        printf("\n");
    }
    
    return 0;
}
