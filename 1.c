#include<stdio.h>
int main()
{
	int a,i;
	printf("请输入一个整数:");
	scanf("%d",&a);
	for(i=0;a;i++)
	{
		
		printf("%d ",a%10);
		a=a/10;
	}
	printf("这个数是%d位数",i);

return 0;
}
