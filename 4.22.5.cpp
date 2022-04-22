#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
	char arr1[]="welcome to the bit!!!!!!";
	char arr2[]="########################";
	
	int left=0;
	int right=strlen(arr1)-1;
 
 	while(left<=right)
 	{
 		arr2[left]=arr1[left];
 		arr2[right]=arr1[right];
 		printf("%s\n",arr2);
 		
 		Sleep(1000);//ÐÝÏ¢1Ãë
		 
		left++;
		right--; 
	 }
	return 0;
}

