#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");//��ֻ���ķ�ʽ��test.txt�ļ�
//	if (pf == NULL)//�ж��ļ��Ƿ�򿪳ɹ�
//	{
//		perror("file opening failed");//�൱��printf("file opening failed: %s",strerror(errno))
//		return 0;
//	}
//	fclose(pf);//�ر��ļ�
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");//��ֻд�ķ�ʽ��test.txt�ļ�,�����·����û��test.txt�ļ�������Զ�����
//	if (pf == NULL)
//	{
//		perror("file opening failed");
//		return 0;
//	}
//	//д�ļ�
//	fputc('h', pf);
//	fputc('e', pf);
//	fputc('l', pf);
//	fputc('l', pf);
//	fputc('o', pf);
//
//	//�ر��ļ�
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
//	fwrite(&a, 4, 1, pf);//�Զ����Ƶ���ʽд���ļ���
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//���·��
//	//FILE* pf = fopen("test.txt", "r");
//	//����·��
//	//FILE* pf = fopen("C:\\��������C����\\8-10�ļ�����\\8-10�ļ�����\\test.txt", "r");
//	//. ��ʾ��ǰ·��
//	//FILE* pf = fopen(".test.txt", "w");//.�Ӳ��Ӷ�һ��
//	//..��ʾ��һ��·��
//	//FILE* pf = fopen("..\test.txt", "w");//'\'����ʡ
//	FILE* pf = fopen("..\..\test.txt", "w");//���ϼ�
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
//	//���ļ�
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

//�Ӽ�������
//�������Ļ.
//����&��Ļ�����ⲿ�豸
//
//����-��׼�����豸- stdin
//��Ļ-��׼����豸- stdout
//��һ������Ĭ�ϴ򿪵��������豸
//
//stdin FILE*
//stdout FILE*
//stderr FILE*

//int main()
//{
//	int ch = fgetc(stdin);//�Ӽ��������ȡһ���ַ�
//	fputc(ch, stdout);//��ch�������Ļ��
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
//	//���ļ�
//	fgets(buf, 1024, pf);
//	printf("%s\n", buf);
//	puts(buf);//�������printfЧ��һ��
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
//	//д�ļ�
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
	//fgets(buf, 1024, stdin);//�Ӽ����϶�ȡ
	//fputs(buf, stdout);//����Ļ�����

//	gets(buf);//������һ��
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
//	//�Ը�ʽ������ʽд�ļ�
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
//	//��ʽ������ʽд�ļ�
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
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);//�Ӽ��̶�ȡ����
//	fprintf(stdout, "%d %.2f %s\n", s.n, s.score, s.arr);//�������������Ļ��
//
//	return 0;
//}

//int main()
//{
//	struct S s = { 100, 3.14f, "hello" };
//	struct S tmp = { 0 };
//	char buf[1024] = {0};
//	//�Ѹ�ʽ��������ת�����ַ����洢��buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n", buf);
//
//	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}

