// c program for factorial range

#include<stdio.h>

int main() {
    int range, sum = 0;
    printf("Enter range:\n");
    scanf("%d", &range);

    for (int j = 1; j <= range; j++) {
        int fact = 1;
        for (int i = 1; i <= j; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
    }

    printf("%d\n", sum);

    return 0;
}

