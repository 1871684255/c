#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{//���⿪ʼ
//	int num = 0;//�ֲ�������������
//	{
//		printf("%d\n", num);//0
//	}
//	return 0;
//}//�������

//int a = 20;//�����ڴ����{}֮��ı���-ȫ�ֱ���
//
//int main()
//{
//	int a = 10;//�����ڴ����{}����ı���-�ֲ�����
//	printf("a = %d\n", a);//���ֲ�������ȫ�ֱ�����������ͬ��ʱ�򣬾ֲ���������(�ͽ�ԭ��)
//	return 0;
//}

//const���εĳ�����
//int main()
//{
//	const int n = 10;
//	printf("%d\n", n);
//	n = 20;//error const���εĳ��������г�������
//	printf("%d\n", n);
//	return 0;
//}

//4.
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��

//void init_arr(int* parr, int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		*(parr + i) = 0;
//	}
//}
//
//void reverse_arr(int* parr, int len)
//{
//	int left = 0;
//	int right = len - 1;
//	int t = 0;
//	while (left < right)
//	{
//		t = *(parr + left);
//		*(parr + left) = *(parr + right);
//		*(parr + right) = t;
//		left++;
//		right--;
//	}
//}
//
//void empty_arr(int* parr, int len)
//{
//	int i;
//	for (i = 0; i < len; i++)
//	{
//		parr[i] = 0;
//	}
//}
//
//void print(int* parr, int len)
//{
//	int i;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", parr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	init_arr(arr, sz);
//	print(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i+1;
//	}
//	print(arr, sz);
//	reverse_arr(arr, sz);
//	print(arr, sz);
//	empty_arr(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//5.ʵ��һ���������ж�һ�����ǲ���������
//int is_ss(int n)
//{
//	int i;
//	for (i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	printf("�����������ж��Ƿ�����������:>");
//	scanf("%d", &input);
//	ret = is_ss(input);
//	if (ret)
//	{
//		printf("%d������\n", input);
//	}
//	else
//	{
//		printf("%d��������\n", input);
//	}
//	return 0;
//}

//������A�����ݺ�����B�����ݽ���������һ����
//int main()
//{
//	int arrA[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arrB[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int t = 0;
//	int i;
//	int sz = sizeof(arrA) / sizeof(arrA[0]);
//	for (i = 0; i < sz; i++)
//	{
//		t = arrA[i];
//		arrA[i] = arrB[i];
//		arrB[i] = t;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arrA[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arrB[i]);
//	}
//	printf("\n");
//	return 0;
//}

//дһ���������ز�����������1�ĸ���

//int coount_bit_one(unsigned int n)//��һ�ַ���%2��/2
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

//int coount_bit_one(int n)//�ڶ��ַ�������n��ÿһλȥ��1��
//{
//	int count = 0;
//	int i;
//	for (i = 0; i < 32; i++)
//	{
//		if ((1&(n >> i)) == 1)
//			count++;
//	}
//	return count;
//}

//int coount_bit_one(int n)//�����ַ�����Ҳ�����Ž⣬nÿ&һ��n-1��n�Ķ��������ұߵ�1����һ����ֱ��Ϊ0
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	scanf("%d", &i);
//	count = coount_bit_one(i);
//	printf("count = %d\n", count);
//	return 0;
//}

//����int����m��n�Ķ������ж��ٸ�Ϊ��ͬ
//int get_diff_bit(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	i = m^n;
//	//�ټ���i�м���һ
//	while (i)
//	{
//		i = i &(i - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m, n;
//	int ret = 0;
//	scanf("%d%d", &m, &n);
//	ret = get_diff_bit(m, n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//�ֱ��ӡһ�������Ķ�����λ������λ��ż��λ

//void print(m)
//{
//	int i;
//	printf("����λ:\n");
//	for (i = 30; i >= 0; i -= 2)//iΪm�����ƶ���λ��
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ:\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

//��дһ��������ӡ99�˷���f��n��n���ڼ��ʹ�ӡ���ٳ˶���

//void f(n)
//{
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	f(n);
//	return 0;
//}

//�ݹ���⵹���ַ���reverse_string()
#include <string.h>

void reverse_string(char* parr)
{
	char tmp;
	int sz = strlen(parr) - 1;
	int left = 0;
	int right = sz;
	tmp = parr[left];
	parr[left] = parr[right];
	parr[right] = '\0';
	if (left < right)
		reverse_string(parr+1);
	parr[right] = tmp;

}

int main()
{
	char arr[] = { "abcdefg" };
	int sz = strlen(arr);
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}