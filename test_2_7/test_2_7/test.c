#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����b������ֵ��������
//ð������
//int main(void)
//{
//	int n,i;
//	int arr[100] = { 0 };
//	int* p;
//	scanf("%d", &n);
//
//	/*for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}*/
//	//����ָ��Ч�ʸ���
//	for (p = arr; p < arr + n; p++)
//	{
//		scanf("%d", p);
//	}
//
//	//ð������
//	for (i = 0; i < n - 1; i++)
//	{
//		int j,temp;
//		for (j = i + 1; j < n; j++)
//		{
//			if (abs(arr[i]) < abs(arr[j]))
//			{
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//
//	/*for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//	//ָ��������
//	for (p = arr; p < arr + n; p++)
//	{
//		printf("%d ", *p);
//	}
//
//	return 0;
//}

//���� c: ͳ��Ԫ���Ĵ�������������
int main(void)
{
	int n,i,k;
	int num1, num2, num3, num4, num5;
	
	char str[100] = { 0 };
	scanf("%d", &n);
	getchar();//���߻������ڵ�\n
	for (i = 0; i < n; i++)
	{
		num1 = num2 = num3 = num4 = num5 = 0;
		gets(str);
		int j = 0;
		while (str[j] != '\0')
		{
			if (str[j] == 'a') num1++;
			else if (str[j] == 'e') num2++;
			else if (str[j] == 'i') num3++;
			else if (str[j] == 'o') num4++;
			else if (str[j] == 'u') num5++;
			j++;
		}
		printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n", num1, num2, num3, num4, num5);
	}
	return 0;
}
