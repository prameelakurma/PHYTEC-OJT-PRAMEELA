#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // for STDIN_FILNO
int main()
{
   char buff[256];
   FILE *ptr;
   int n = read (ptr, buff, 255);
   write(1, buff, n); 
   return 0;

}

