//���ֲ���
//����ҵ���x���صڼ����ҵ������򷵻�-1
#include <stdio.h>
int findx(int a[], int x, int sz)
{
	int left = 0;
	int right = sz - 1;
	int i = 0;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (a[mid]<x)
		{
			left = mid+1;
		}
		else if (a[mid]>x)
		{
			right = mid-1;
		}
		else
		{
			i++;
			break;
		}
		i++;
	}
	return i;
}
int main()
{
	int a[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int x = 0;
	int sz = (sizeof(a) / sizeof(a[0])) ;
	int n = findx(a, x, sz);
	if (n == -1)
	{
		printf("û�ҵ���");
	}
	else
	{
		printf("�ҵ��ˣ��ڵ�%d���ҵ���", n);
	}
	return 0;
}