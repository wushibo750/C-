//���⣺���������������Լ������С������
#include<stdio.h>
//���Լ��
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
//��С������
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
	printf("����������������");
	scanf("%d%d",&a,&b);
	result=GCD(a,b);
	printf("%d��%d�����Լ��Ϊ��%d\n",a,b,result);
	result=LCM(a,b);
	printf("%d��%d����С������Ϊ��%d\n",a,b,result);
	return 0;
}

