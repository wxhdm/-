//�ж��Ƿ����Ԫ���������еĸ�����������Ԫ�ص�һ��
//��������򷵻�1�����򷵻�0
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
		printf("����Ԫ���������еĸ�����������Ԫ�ص�һ��");
	else
		printf("������Ԫ���������еĸ�����������Ԫ�ص�һ��");
	return 0;
}