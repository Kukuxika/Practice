#include <stdio.h>

void PrintDate(int arr[],int sz)
{
	int i,j,k,temp;
	
		//int arr[]={9,4,6,3};
	//int sz = sizeof(arr)/sizeof(arr[0]);

	for(i=0;i<sz;i++)
	{
		k=i;
		for(j=0;j<sz-1;j++)
		{
			if(arr[j]>arr[k])
			{
				k=j;
			}
		}
		if( k!=i)
		{
			temp=arr[k];
			arr[k]=arr[i];
			arr[i]=temp;
		}
	}
}
	int main()
{
	int i=0;
	int arr[]={9,4,6,3};
	int sz = sizeof(arr)/sizeof(arr[0]);
	PrintDate(arr, sz);
		for(i=0;i<sz;i++)
		{
			printf(" %d ",arr[i]);
		}
		return 0;	
}
 
 	



