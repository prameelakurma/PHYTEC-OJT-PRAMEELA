#include <stdio.h>

int main() 
{
    int num, i, j;
    
    printf("Enter x value: ");
    scanf("%d", &num);

    for (i = 0; i < 8; i++) {
        j = 7 - i; 

        if (((num << i))  != ((num << j))) {
            // Swap bits only if they are different
            num = num ^ (0x1 << i); // Toggle bit i
            num = num ^ (0x1 << j); // Toggle bit j
        }
    }

    printf("%x\n", num);

    return 0;
}



