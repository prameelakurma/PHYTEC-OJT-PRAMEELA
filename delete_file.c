#include <stdio.h>

int main() {
    char name[100];

    printf("Input the name of file to delete:\n");
    scanf("%s", name);
    if (remove(name) == 0)
    {
        printf("The file %s is deleted successfully..!!\n", name);
    }
    else
    {
        printf("Failed to delete the file %s.\n", name);
    }

}

