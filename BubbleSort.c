#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j,temp;
	printf("\n Enter 5 array element:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n Sorted elements:");
	for(i=0;i<5;i++)
	printf("\n %d ",a[i]);
	getch();
}
