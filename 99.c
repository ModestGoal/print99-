#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = 0;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	for (i = 0; i < sz; i++)//i表示数组的下标；arr[i]表示数据下标i的元素值
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
		//打印一行的信息
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i*j);
		}
		printf("\n");
	}



	return 0;
}

