#include <stdio.h>
#include <string.h>
int main()
{
	int i=0;
	char password[20]={0};
	
	for(i=0;i<3;i++)
	{
		printf("请输入密码;>");
		scanf("%s",password);
		if(strcmp(password,"123456")==0)
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("登陆失败"); 
		}
		if(3==i)
		{
			printf("三次错误，账户锁定");
		}
	}
 
 	
	return 0;
}

