#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//int main()//malloc��ʹ��
//{
//	//���ڴ�������40���ֽڵĿռ�
//	int* p = (int*)malloc(40);
//	//��̬�����ڴ�Ҳ����ʧ�ܣ�������Ҫ�ж��Ƿ����ɹ���ʹ��
//	//����̬�ڴ����ʧ��ʱ���ص���NULL���ɹ��򷵻ؿ��ٵ��ڴ�ĵ�ַ
//	if (p == NULL)
//		printf("%s\n", strerror(errno));//��ӡ����ԭ��
//	else
//	{
//		//����ʹ��
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
//	//����̬������ڴ治��ʹ�õ�ʱ���Ӧ���ͷŵ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()//calloc��ʹ��
//{
//	//int* p = (int*)malloc(sizeof(int)* 10);//ʹ��malloc����10�����͵Ŀռ�
//	int* p = (int*)calloc(10, sizeof(int));//ʹ��calloc����10�����͵Ŀռ�
//	//���߲����ڴ����������������ڴ�������䶯̬�ڴ���Ҳ������
//	//malloc�������ڴ�ռ����涼����������
//	//��calloc�������ڴ�󻹻Ὣ������ڴ�ռ�ȫ����ʼ��Ϊ0
//	//calloc��mallocһ����Ҳ���ܷ���ʧ�ܣ�����Ҳ��Ҫ�ж��Ƿ����ɹ�
//	if (p == NULL)
//		printf("%s\n", strerror(errno));//��ӡ����ԭ��
//	else
//	{
//		int i;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//ͬ������̬������ڴ治��ʹ�õ�ʱ���Ӧ���ͷŵ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()//realloc��ʹ��
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
//	//realloc������̬���ٵ��ڴ棬��malloc���ٵ�20���ֽ��ڴ治���������ǵ�ʹ��ʱ
//	//���ǾͿ�����realloc��������̬���ٵ��ڴ棬
//	//�������malloc���ٵ��ڴ治���ˣ���realloc�ٿ����㹻�Ķ�̬�ڴ�
//	int* pr = realloc(p, 40);
//	//reallocʹ�õ�ע�����
//	//1. ���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2. ���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
//	//  ����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ�
//	//  ��󷵻��¿��ٵ��ڴ�ռ��ַ
//	//3. ����һ���µı���������realloc�����ķ���ֵ
//	if (pr == NULL)//reallocҲ���ܿ���ʧ��,������Ҫһ���м�����������������
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
//	int* p = realloc(NULL, 40);//ʹ��realloc����40���ֽڵĿռ䣬
//					//ֻ�轫��һ��������Ϊ��ָ�룬�Ϳ��Դﵽmallocһ����Ч��
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
//	GetMemory(str);//���ú���֮��strָ��Ļ��ǿ�ָ��
//	strcpy(str, "hello world");//����൱�ڽ�hello world������ָ��
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//	//��������ִ�н���ǹҵ��ˣ�ԭ�����ڵ���GetMemory(str)�����Ǵ�ֵ
//}
//
////����1
//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);//����ֵ��Ϊ��ַ
//	strcpy(str, "hello world");
//	printf(str);
//	//�ͷ��ڴ�
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//����2
//char* GetMemory()
//{
//	char* p = (char *)malloc(100);
//	return p;//�Ѷ�̬�����ڴ�ĵ�ַ������ֵ���ع�ȥ
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();//��str���ܶ�̬�����ڴ�ĵ�ַ
//	strcpy(str, "hello world");
//	printf(str);
//	//�ͷ��ڴ�
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
	int a[];//���������Ա
};

int main()
{
													// ���������鿪�ٵĿռ�
	struct S* p = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
	if (p == NULL)
		printf("%s\n", strerror(errno));
	else
	{
		int i;
		for (i = 0; i < 10; i++)
		{
			p->a[i] = i;//������������в���
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", p->a[i]);
		}
	}
	
	return 0;
}