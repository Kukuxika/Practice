#include <stdio.h>
int main()
{
	int arr[]={0,1,2,3,4,5,6,7,8,9};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int *p=arr;
	int i;
	for(i=0;i<sz;i++)
	{
		printf(" %d ",*p);
		p=p+1;
	}
 
 	
	return 0;
}

