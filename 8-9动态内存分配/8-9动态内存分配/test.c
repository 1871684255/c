#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//int main()//malloc的使用
//{
//	//向内存申请了40个字节的空间
//	int* p = (int*)malloc(40);
//	//动态分配内存也可能失败，所以需要判断是否分配成功再使用
//	//当动态内存分配失败时返回的是NULL，成功则返回开辟的内存的地址
//	if (p == NULL)
//		printf("%s\n", strerror(errno));//打印错误原因
//	else
//	{
//		//正常使用
//		int i;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态分配的内存不再使用的时候就应该释放掉
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()//calloc的使用
//{
//	//int* p = (int*)malloc(sizeof(int)* 10);//使用malloc分配10个整型的空间
//	int* p = (int*)calloc(10, sizeof(int));//使用calloc分配10个整型的空间
//	//二者不仅在传参有所区别，在向内存申请分配动态内存上也有区别
//	//malloc分配完内存空间里面都是垃圾数字
//	//而calloc分配完内存后还会将分配的内存空间全部初始化为0
//	//calloc和malloc一样，也可能分配失败，所以也需要判断是否分配成功
//	if (p == NULL)
//		printf("%s\n", strerror(errno));//打印错误原因
//	else
//	{
//		int i;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//同理：当动态分配的内存不再使用的时候就应该释放掉
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()//realloc的使用
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//		printf("%s\n", strerror(errno));
//	else
//	{
//		int i;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//realloc调整动态开辟的内存，当malloc开辟的20个字节内存不能满足我们的使用时
//	//我们就可以用realloc来调整动态开辟的内存，
//	//这里假设malloc开辟的内存不够了，用realloc再开辟足够的动态内存
//	int* pr = realloc(p, 40);
//	//realloc使用的注意事项：
//	//1. 如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2. 如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
//	//  开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间
//	//  最后返回新开辟的内存空间地址
//	//3. 得用一个新的变量来接受realloc函数的返回值
//	if (pr == NULL)//realloc也可能开辟失败,所以需要一个中间变量，来“验验货”
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		p = pr;
//		int i;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = realloc(NULL, 40);//使用realloc开辟40个字节的空间，
//					//只需将第一个参数改为空指针，就可以达到malloc一样的效果
//	return 0;
//}

//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);//调用函数之后str指向的还是空指针
//	strcpy(str, "hello world");//这就相当于将hello world赋给空指针
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//	//程序最终执行结果是挂掉了，原因在于调用GetMemory(str)函数是传值
//}
//
////改正1
//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);//将传值改为传址
//	strcpy(str, "hello world");
//	printf(str);
//	//释放内存
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//改正2
//char* GetMemory()
//{
//	char* p = (char *)malloc(100);
//	return p;//把动态开辟内存的地址当返回值返回过去
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();//用str接受动态开辟内存的地址
//	strcpy(str, "hello world");
//	printf(str);
//	//释放内存
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

struct S
{
	int i;
	int a[];//柔性数组成员
};

int main()
{
													// 给柔型数组开辟的空间
	struct S* p = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
	if (p == NULL)
		printf("%s\n", strerror(errno));
	else
	{
		int i;
		for (i = 0; i < 10; i++)
		{
			p->a[i] = i;//对柔性数组进行操作
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", p->a[i]);
		}
	}
	
	return 0;
}