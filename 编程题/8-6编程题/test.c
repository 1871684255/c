#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//输入一串字符串将它逆序打印
//例 输入i am ok 打印 ko ma i

//void reverse(char* parr)
//{
//	assert(parr);//判断parr的有效性
//	int left = 0;//左下标
//	int len = strlen(parr);//数组长度
//	int right = len-1;//右下标
//	char tmp;
//	while (left < right)//逆序条件
//	{
//		tmp = parr[left];
//		parr[left] = parr[right];
//		parr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	//scanf("%s", &arr);//输入i am ok,打印结果 i 由于scanf无法接收空格，故改用gets函数
//	gets(arr);//读取一行
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//求a+aa+aaa+aaaa+aaaaa+...的前n项之和
//例a=2，n=5，2+22+222+2222+22222的和

//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i;
//	int sum = 0;
//	int ret = 0;
//	scanf("%d%d", &a, &n);
//	ret = a;
//	for (i = 0; i < n; i++)
//	{
//		sum += a;
//		a = a * 10 + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//打印1~100000之间的自幂数
#include <math.h>

//int main()
//{
//	int i,n,tmp;
//	int sum = 0;
//	for (i = 1; i <= 100000; i++)//产生1~100000之间的数
//	{
//		n = 1;//每一次for循环n和sum的值要重置
//		sum = 0;
//		tmp = i;
//		//第一步 计算i的位数 n
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//第二步 计算i的每一位n次方之和 sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);//i的每一位数的n次幂
//			tmp /= 10;
//		}
//		//第三步 判断i和sum是否相等，相等则为自幂数，反之则不是
//		if (i == sum)
//			printf("%d ", i);
//	}
//	return 0;
//}


//打印菱形
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *

//int main()
//{
//	int line = 0;
//	int i, j;
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)//打印上半部分
//	{
//		for (j = 0; j < line-1-i; j++)//打印空格
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i+1; j++)//打印*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)//打印下半部分
//	{
//		for (j = 0; j <= i; j++)//打印空格
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i)-1; j++)//打印*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。

//int main()
//{
//	int money = 0;
//	int empty = 0;//空瓶
//	int total = 0;//喝掉的汽水
//	scanf("%d", &money);
//	//if (money == 0)
//	//	total = 0;
//	//else
//	//	total = money * 2 - 1;
//	total = money;
//	empty = total;
//	while (empty >= 2)
//	{
//		total += empty / 2;//空瓶换的汽水
//		empty = empty % 2 + empty / 2;//余下的空瓶+空瓶换来的汽水又喝掉的空瓶
//	}
//	printf("%d\n", total);
//	return 0;
//}

//编写函数实现将数组中的偶数位放在后面，奇数位放在前面
//void move(int* parr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp;
//	while (left < right)
//	{
//		while ((parr[left] % 2 == 1) && left < right)
//			left++;
//		while ((parr[right] % 2 == 0) && left < right)
//			right--;
//		tmp = parr[left];
//		parr[left] = parr[right];
//		parr[right] = tmp;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	move(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
// ................
//打印杨辉三角
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//		for (j = 0; j < 10; j++)
//		{
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++)//打印数组
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//题目名称：猜凶手
//题目内容：日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词 :
//A说：不是我。//0
//B说：是C。   //0
//C说：是D。   //0
//D说：C在胡说 //1
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手

//int main()
//{
//	int keller = 0;
//	for (keller = 'A'; keller <= 'D'; keller++)
//	{
//		//  A说：不是我         B说：是C。         C说：是D        D说：C在胡说
//		if ((keller != 'A') + (keller == 'C') + (keller == 'D') + (keller != 'D') == 3)
//			printf("%c\n", keller);
//	}
//	return 0;
//}