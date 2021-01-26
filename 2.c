#include<stdio.h>
int main()
{
	int a,i,b[20];
	printf("请输入一个整数：");
	scanf("%d",&a);
	for(i=0;a;i++)
	{
		b[i]=a%10;
		a=a/10;
	}
	i--;
	for( ;i>=0;i--)
		printf("%d ",b[i]);
	return 0;
}
