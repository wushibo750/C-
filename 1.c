//题意：求两个整数的最大公约数和最小公倍数
#include<stdio.h>
//最大公约数
int GCD(int a,int b)
{
	int gcd;
	gcd=a>b ? b:a;
	while(gcd>1)
	{
		if((a%gcd==0)&&(b%gcd==0))
			return gcd;
	}
	return gcd;
}
//最小公倍数
int LCM(int a,int b)
{
	int lcm;
	lcm=a>b ?a:b;
	while(1)
	{
		if((lcm%a==0)&&(lcm%b==0))
			break;
		lcm++;
	}
	return lcm;
}
int main()
{
	int a,b,result;
	printf("请输入两个整数：");
	scanf("%d%d",&a,&b);
	result=GCD(a,b);
	printf("%d和%d的最大公约数为：%d\n",a,b,result);
	result=LCM(a,b);
	printf("%d和%d的最小公倍数为：%d\n",a,b,result);
	return 0;
}

