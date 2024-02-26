// c program for det matrix 

#include<stdio.h>
void main()
{
	int mat[3][3];
	int i,j;
	int a,b,c,d,e,f,g,h,det;
	printf("enter matrix\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
    a = mat[0][0];
    b = mat[0][1];
    c = mat[0][2];
    d = mat[1][0];
    e = mat[1][1];
    f = mat[1][2];
    g = mat[2][0];
    h = mat[2][1];
    i = mat[2][2];
    det= (a*(e*i-f*h))-(b*(d*i-f*g))+(c*(d*h-e*g));
    printf("%d\n",det);
}

