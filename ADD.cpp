//有一个整数序列，设计一个算法判断其中是否存在两个元素的和恰好等于给定的整数k
#include <stdio.h>
int ADD(int* a, int k,int sz)
{
	int i, j;
	for (i = 0; i < sz; i++)
	{
		int add = 0;
		for (j = i; j < sz; j++)
		{
			add = a[i] + a[j];
			if (add == k)
				return 1;
		}
	}
	return 0;
}
int main()
{
	int a[] = { 1,2,2,3,4 };
	int k = 4;
	int sz = sizeof(a) / sizeof(a[0]);
	int sum = ADD(a, k,sz);
	if (sum == 1)
		printf("存在两元素之和等于k");
	else
		printf("不存在两元素之和等于k");
	return 0;
}