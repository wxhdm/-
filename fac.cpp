//设计递归算法，求解n!
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
	printf("请输入n的值：\n");
	scanf("%d", & n); 
	if (n >= 1)
	{
		sum = fac(n);
		printf("%d!为%d", n, sum);
	}
	else
		printf("输入错误！");
	return 0;
}