#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");//以只读的方式打开test.txt文件
//	if (pf == NULL)//判断文件是否打开成功
//	{
//		perror("file opening failed");//相当于printf("file opening failed: %s",strerror(errno))
//		return 0;
//	}
//	fclose(pf);//关闭文件
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");//以只写的方式打开test.txt文件,如相对路径下没有test.txt文件，则会自动创建
//	if (pf == NULL)
//	{
//		perror("file opening failed");
//		return 0;
//	}
//	//写文件
//	fputc('h', pf);
//	fputc('e', pf);
//	fputc('l', pf);
//	fputc('l', pf);
//	fputc('o', pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("file opening failed");
//		return 0;
//	}
//	fwrite(&a, 4, 1, pf);//以二进制的形式写到文件中
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//相对路径
//	//FILE* pf = fopen("test.txt", "r");
//	//绝对路径
//	//FILE* pf = fopen("C:\\比特鹏哥C语言\\8-10文件操作\\8-10文件操作\\test.txt", "r");
//	//. 表示当前路径
//	//FILE* pf = fopen(".test.txt", "w");//.加不加都一样
//	//..表示上一级路径
//	//FILE* pf = fopen("..\test.txt", "w");//'\'不能省
//	FILE* pf = fopen("..\..\test.txt", "w");//上上级
//	if (pf == NULL)
//	{
//		perror("file opening failed");
//		return 0;
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		perror("file opening failed");
//		return 0;
//	}
//	//读文件
//	printf("%c", fgetc(pfRead));//h
//	printf("%c", fgetc(pfRead));//e
//	printf("%c", fgetc(pfRead));//l
//	printf("%c", fgetc(pfRead));//l
//	printf("%c", fgetc(pfRead));//o
//
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//从键盘输入
//输出到屏幕.
//键盘&屏幕都是外部设备
//
//键盘-标准输入设备- stdin
//屏幕-标准输出设备- stdout
//是一个程序默认打开的两个流设备
//
//stdin FILE*
//stdout FILE*
//stderr FILE*

//int main()
//{
//	int ch = fgetc(stdin);//从键盘输入读取一个字符
//	fputc(ch, stdout);//把ch输出到屏幕上
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("file opening failed");
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);
//	printf("%s\n", buf);
//	puts(buf);//与上面的printf效果一样
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("file opening failed");
//		return 0;
//	}
//	//写文件
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
	//fgets(buf, 1024, stdin);//从键盘上读取
	//fputs(buf, stdout);//在屏幕上输出

//	gets(buf);//与上面一样
//	puts(buf);
//	return 0;
//}

struct S
{
	int n;
	float score;
	char arr[10];
};

//int main()
//{
//	struct S s = { 100, 3.14f, "hello" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("file opening failed");
//		return 0;
//	}
//	//以格式化的形式写文件
//	fprintf(pf, "%d %f %s\n", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("file opening failed");
//		return 0;
//	}
//	//格式化的形式写文件
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s\n", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);//从键盘读取数据
//	fprintf(stdout, "%d %.2f %s\n", s.n, s.score, s.arr);//把数据输出到屏幕上
//
//	return 0;
//}

//int main()
//{
//	struct S s = { 100, 3.14f, "hello" };
//	struct S tmp = { 0 };
//	char buf[1024] = {0};
//	//把格式化的数据转换成字符串存储到buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n", buf);
//
//	//从buf中读取格式化的数据到tmp中
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}

