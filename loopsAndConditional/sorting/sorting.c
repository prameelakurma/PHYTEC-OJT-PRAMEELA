void sorting(int arr[])
{
	int j,k,temp,i;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
for(k=0;k<5;k++)
{
			printf("%d ",arr[k]);
}
}

