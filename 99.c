#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = 0;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	for (i = 0; i < sz; i++)//i��ʾ������±ꣻarr[i]��ʾ�����±�i��Ԫ��ֵ
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	printf("max= %d\n", max);
//
//	return 0;
//}

int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		//��ӡһ�е���Ϣ
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i*j);
		}
		printf("\n");
	}



	return 0;
}

