//��һ���������У����һ���㷨�ж������Ƿ��������Ԫ�صĺ�ǡ�õ��ڸ���������k
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
		printf("������Ԫ��֮�͵���k");
	else
		printf("��������Ԫ��֮�͵���k");
	return 0;
}