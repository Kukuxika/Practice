#include <stdio.h>
int main()
{
	int i=0;
	int n;
	int ret=1;
	int sum;
	scanf("%d",&n);
	for(n=1;n<=3;n++)
	{
		ret=1;
		for(i=1;i<=n;i++)
		{
			ret=ret*i;
		}
		sum=sum+ret;
 	}
 	printf("sum=%d",sum);
	return 0;
}

