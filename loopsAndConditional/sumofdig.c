//To get sum of each digits by c program, use the following algorithm:

//Step 1: Get number by user
//Step 2: Get the modulus/remainder of the number
//Step 3: sum the remainder of the number
//Step 4: Divide the number by 10
//Step 5: Repeat the step 2 while number is greater than 0.

#include<stdio.h>
 int main()
{
int n,sum=0,m;
printf("Enter a number:");
scanf("%d",&n);
while(n>0)
{
m=n%10;
sum=sum+m;
n=n/10;
}
printf("Sum is=%d",sum);
return 0;
}
