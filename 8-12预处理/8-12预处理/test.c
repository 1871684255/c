#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//__FILE__      //进行编译的源文件
//__LINE__     //文件当前的行号
//__DATE__    //文件被编译的日期
//__TIME__    //文件被编译的时间
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//	//printf("%s\n", __FUNCTION__);
//	//可用于日志
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", 
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//		printf("%s\n", __FUNCTION__);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}

//#define PRINT(X) printf("the value of "#X" is %d\n", X)
//使用 # ，把一个宏参数变成对应的字符串
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("the value of ""a"" is %d\n", a);
//	PRINT(a);
//	//printf("the value of ""b"" is %d\n", b);
//	PRINT(b);
//	return 0;
//}

#define CAT(X, Y) X##Y
//##可以把位于它两边的符号合成一个符号。 它允许宏定义从分离的文本片段创建标识符

//int main()
//{
//	int Class84 = 2019;
//	printf("%d\n", CAT(Class, 84));
//	//printf("%d\n", Class##84);//error
//	//printf("%d\n", Class84);
//	return 0;
//}

#include <stddef.h>

//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
//
//int main()
//{
//	//printf("%d\n", offsetof(struct S, c1));//计算偏移量
//	//printf("%d\n", offsetof(struct S, a));
//	//printf("%d\n", offsetof(struct S, c2));
//	//用宏模拟实现offsetof
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}

//#define DEBUG 0
//
//int main()
//{
//#if defined(DEBUG)
//	printf("hehe\n");
//#endif
//
//#ifdef DEBUG
//	printf("haha\n");
//#endif
//
//#if !defined(DEBUG)
//	printf("heihei\n");
//#endif
//
//#ifndef DEBUG
//	printf("hoho\n");
//#endif
//
//	return 0;
//}

//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2==2
//	printf("hehe\n");
//#else
//	printf("heihei\n");
//#endif
//
//	return 0;
//}

//#define MAX 100
//
//int main()
//{
//	printf("MAX = %d\n", MAX);
//#undef MAX//#undef:移除一个宏定义。
//	printf("MAX = %d\n", MAX);
//	return 0;
//}
#include <stdlib.h>

//#define MALLOC(num, type) (type*)malloc(sizeof(type)*num)
//
//int main()
//{
//	//int* p = (int*)malloc(sizeof(int)* 10);
//	int* p = MALLOC(10, int);//利用宏定义减少代码量
//	return 0;
//}

////函数-1
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//float Max2(float x, float y)
//{
//	return (x > y ? x : y);
//}
//
////宏-2
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	float c = 3.0f;
//	float d = 4.0f;
//	//函数在调用的时候
//	//会有函数调用和返回的开销
//	//
//	float max = Max2(c, d);
//	printf("max = %d\n", max);
//	//预处理阶段就完成了替换
//	//没有函数的调用和返回的开销
//	max = MAX(c, d);
//	max = ((c) > (d) ? (c) : (d));
//	printf("max = %d\n", max);
//	/*int max = Max(a, b);
//	printf("max = %d\n", max);
//	max = MAX(a, b);
//	printf("max = %d\n", max);*/
//
//	return 0;
//}

#define MAX(X, Y) ((X)>(Y)?(X):(Y))

int main()
{
	int a = 10;
	int b = 11;

	int max = MAX(a++, b++);
	//宏替换之后的内容
	//int max = ((a++) > (b++) ? (a++) : (b++));

	printf("%d\n", max);//12
	printf("%d\n", a);//11
	printf("%d\n", b);//13

	return 0;
}