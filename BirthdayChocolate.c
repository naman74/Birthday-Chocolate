#include<stdio.h>
int main()
{
	int i,j,a[10],b,c,k=1,sum=0,count=0,n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("Enter the element\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the value of b and c\n");
	scanf("%d%d",&b,&c);
	int t=c;
	for(i=0;i<n;i++)
	{
		sum=a[i];
		for(j=k;j<t;j++)
		{
		sum=sum+a[j];	
		}
		if(sum==b)
		{
			count++;
		}
		k++;
		t++;
	}
	printf("%d",count);
}
