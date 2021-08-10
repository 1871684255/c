#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{//从这开始
//	int num = 0;//局部变量的作用域
//	{
//		printf("%d\n", num);//0
//	}
//	return 0;
//}//到这结束

//int a = 20;//定义在代码块{}之外的变量-全局变量
//
//int main()
//{
//	int a = 10;//定义在代码块{}里面的变量-局部变量
//	printf("a = %d\n", a);//当局部变量和全局变量的名字相同的时候，局部变量优先(就近原则)
//	return 0;
//}

//const修饰的常变量
//int main()
//{
//	const int n = 10;
//	printf("%d\n", n);
//	n = 20;//error const修饰的常变量具有常量属性
//	printf("%d\n", n);
//	return 0;
//}

//4.
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。

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

//5.实现一个函数，判断一个数是不是素数。
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
//	printf("请输入你想判断是否是素数的数:>");
//	scanf("%d", &input);
//	ret = is_ss(input);
//	if (ret)
//	{
//		printf("%d是素数\n", input);
//	}
//	else
//	{
//		printf("%d不是素数\n", input);
//	}
//	return 0;
//}

//将数组A的内容和数组B的内容交换（数组一样大）
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

//写一个函数返回参数二进制中1的个数

//int coount_bit_one(unsigned int n)//第一种方法%2，/2
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

//int coount_bit_one(int n)//第二种方法，用n的每一位去和1与
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

//int coount_bit_one(int n)//第三种方法，也是最优解，n每&一个n-1，n的二进制最右边的1就少一个，直至为0
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

//两个int整数m和n的二进制有多少个为不同
//int get_diff_bit(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	i = m^n;
//	//再计算i有几个一
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

//分别打印一个整数的二进制位的奇数位和偶数位

//void print(m)
//{
//	int i;
//	printf("奇数位:\n");
//	for (i = 30; i >= 0; i -= 2)//i为m向右移动的位数
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位:\n");
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

//编写一个函数打印99乘法表f（n）n等于几就打印多少乘多少

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

//递归求解倒置字符串reverse_string()
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