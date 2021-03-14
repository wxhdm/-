//判断是否存在元素在数组中的个数超过所有元素的一半
//如果存在则返回1，否则返回0
#include <stdio.h>
bool Deter(int *a,int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz; i++)
	{
		int count = 0;
		for (j = 0; j < sz; j++)
		{
			if (a[i] == a[j])
				count++;
		}
		if (count > sz / 2)
			return 1;
	}
	return 0;
}
int main()
{
	int a[] = { 1,2,2,2,3 };
	int sz = sizeof(a) / sizeof(a[0]);
	int ex = Deter(a,sz);
	if (ex == 1)
		printf("存在元素在数组中的个数超过所有元素的一半");
	else
		printf("不存在元素在数组中的个数超过所有元素的一半");
	return 0;
}