#include<stdio.h>
int main()
{
	long long int t,i,j,temp;
	int a[3];
	scanf("%lld",&t);
	while(t--)
	{
		for(i=0;i<3;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<2-i;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		printf("%lld\n",a[1]);
	}
	return 0;
}
