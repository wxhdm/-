//��Ƶݹ��㷨�����n!
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fac(int n)
{
	if (n == 1)
		return 1;
	else
		return (n * fac(n - 1));
}
int main()
{
	int n,sum;
	printf("������n��ֵ��\n");
	scanf("%d", & n); 
	if (n >= 1)
	{
		sum = fac(n);
		printf("%d!Ϊ%d", n, sum);
	}
	else
		printf("�������");
	return 0;
}