#include<stdio.h>
int main()
{
	long long int i,j,k,l;
	scanf("%lld",&i);
	for(long long int j=0;j<i;j++)
	{
		scanf("%lld%lld",&k,&l);
		if (k>=l)
		printf("%lld ",k);
		else
		printf("%lld ",l);
		printf("%lld\n",k+l);
	}
	return 0;
}
