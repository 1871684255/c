#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

//int my_strlen(char* str)//��һ�ַ��� ������
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}

//int my_strlen(char* str)//�ڶ��ַ��� �ݹ�
//{
//	if (*str == '\0')
//		return 0;
//	else
//	{
//		return my_strlen(++str) + 1;
//	}
//}

//int my_strlen(const char* str)//�����ַ��� ָ���ָ��
//{
//	assert(str);//���ָ�����Ч��
//	const char* p = str;
//	while (*str++)//��б��0
//	{
//		;
//	}
//	return str - p - 1;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)//��src��ָ������ݿ�����destָ��������У�����\0
//	{
//		;
//	}
//	return ret;//����Ŀ���ַ������׵�ַ
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest++)//��\0
//	{
//		;
//	}
//	dest--;
//	while (*dest++ = *src++)//��src��ָ������ݿ�����destָ��������У�����\0
//	{
//		;
//	}
//	return ret;//����Ŀ���ַ������׵�ַ
//}
//
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//	//return *str1 - *str2;
//}
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "abcd";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}

#include <string.h>
//char* my_strncpy(char* dest, const char* src, size_t n)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (n)
//	{
//		*dest++ = *src;
//		if (*src != '\0')
//			src++;
//		n--;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefxxxxxxxx";
//	char arr2[] = "hello bit";
//	my_strncpy(arr1, arr2, 15);
//	return 0;
//}

//char* my_strncat(char* dest, const char* src, size_t n)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (n-- && (*dest++ = *src++))
//	{
//		;
//	}
//	if (*--src != '\0')
//		*dest = '\0';
//	return ret;
//}
//
//int main()
//{
//	char arr1[100] = "abcdef\0xxxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strncat(arr1, arr2, 5);
//	return 0;
//}

//int my_strncmp(const char* str1, const char* str2, size_t n)
//{
//	assert(str1 && str2);
//	while (n)
//	{
//		if (*str1 == *str2)
//		{
//			str1++;
//			str2++;
//		}
//		else if (*str1 > *str2)
//			return 1;
//		else
//			return -1;
//		n--;
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abcef";
//	char arr2[] = "abcd";
//	int ret = my_strncmp(arr1, arr2, 4);
//	printf("%d\n", ret);
//	return 0;
//}
//char* my_strstr(const char* str1, const char* str2)
//{
//	char* cur = (char*)str1;
//	char* p1, *p2;
//	assert(str1 && str2);
//	if (*str2 == '\0')
//		return NULL;
//	while (*cur)
//	{
//		p1 = cur;
//		p2 = (char*)str2;
//		while (*p1 && *p2 && *p1 == *p2)
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//			return cur;
//		cur++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//		printf("�Ӵ�������\n");
//	else
//		printf("�ҵ���\n");
//	printf("%s\n", ret);
//	return 0;
//}

//int main()
//{
	//char arr1[] = "199.110.210.302";
	//char arr2[] = ".";
	//strtok(arr1, arr2);
	//printf("%s\n", arr1);
//	char arr1[] = "hjc@168142.com";
//	char arr2[] = "@.";
//	char* ret = NULL;
//	for (ret = strtok(arr1, arr2); ret != NULL; ret = strtok(NULL, arr2))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

#include <errno.h>
//
//int main()
//{
//������  ������Ϣ
//0 -     No error
//1 -     Operation not permitted
//2 -     No such file or directory
//...
//errno ��һ��ȫ�ֵĴ�����ı���
//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//char*str = strerror(errno);
//printf("%s\n", str);
//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}