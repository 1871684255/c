#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

//int my_strlen(char* str)//第一种方法 计数器
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}

//int my_strlen(char* str)//第二种方法 递归
//{
//	if (*str == '\0')
//		return 0;
//	else
//	{
//		return my_strlen(++str) + 1;
//	}
//}

//int my_strlen(const char* str)//第三种方法 指针减指针
//{
//	assert(str);//检测指针的有效性
//	const char* p = str;
//	while (*str++)//找斜杠0
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
//	while (*dest++ = *src++)//将src所指向的内容拷贝到dest指向的内容中，包括\0
//	{
//		;
//	}
//	return ret;//返回目的字符串的首地址
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
//	while (*dest++)//找\0
//	{
//		;
//	}
//	dest--;
//	while (*dest++ = *src++)//将src所指向的内容拷贝到dest指向的内容中，包括\0
//	{
//		;
//	}
//	return ret;//返回目的字符串的首地址
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
//		printf("子串不存在\n");
//	else
//		printf("找到了\n");
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
//错误码  错误信息
//0 -     No error
//1 -     Operation not permitted
//2 -     No such file or directory
//...
//errno 是一个全局的错误码的变量
//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//char*str = strerror(errno);
//printf("%s\n", str);
//打开文件
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