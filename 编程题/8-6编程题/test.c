#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//����һ���ַ������������ӡ
//�� ����i am ok ��ӡ ko ma i

//void reverse(char* parr)
//{
//	assert(parr);//�ж�parr����Ч��
//	int left = 0;//���±�
//	int len = strlen(parr);//���鳤��
//	int right = len-1;//���±�
//	char tmp;
//	while (left < right)//��������
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
//	//scanf("%s", &arr);//����i am ok,��ӡ��� i ����scanf�޷����տո񣬹ʸ���gets����
//	gets(arr);//��ȡһ��
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//��a+aa+aaa+aaaa+aaaaa+...��ǰn��֮��
//��a=2��n=5��2+22+222+2222+22222�ĺ�

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

//��ӡ1~100000֮���������
#include <math.h>

//int main()
//{
//	int i,n,tmp;
//	int sum = 0;
//	for (i = 1; i <= 100000; i++)//����1~100000֮�����
//	{
//		n = 1;//ÿһ��forѭ��n��sum��ֵҪ����
//		sum = 0;
//		tmp = i;
//		//��һ�� ����i��λ�� n
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//�ڶ��� ����i��ÿһλn�η�֮�� sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);//i��ÿһλ����n����
//			tmp /= 10;
//		}
//		//������ �ж�i��sum�Ƿ���ȣ������Ϊ����������֮����
//		if (i == sum)
//			printf("%d ", i);
//	}
//	return 0;
//}


//��ӡ����
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
//	for (i = 0; i < line; i++)//��ӡ�ϰ벿��
//	{
//		for (j = 0; j < line-1-i; j++)//��ӡ�ո�
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i+1; j++)//��ӡ*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)//��ӡ�°벿��
//	{
//		for (j = 0; j <= i; j++)//��ӡ�ո�
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i)-1; j++)//��ӡ*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���

//int main()
//{
//	int money = 0;
//	int empty = 0;//��ƿ
//	int total = 0;//�ȵ�����ˮ
//	scanf("%d", &money);
//	//if (money == 0)
//	//	total = 0;
//	//else
//	//	total = money * 2 - 1;
//	total = money;
//	empty = total;
//	while (empty >= 2)
//	{
//		total += empty / 2;//��ƿ������ˮ
//		empty = empty % 2 + empty / 2;//���µĿ�ƿ+��ƿ��������ˮ�ֺȵ��Ŀ�ƿ
//	}
//	printf("%d\n", total);
//	return 0;
//}

//��д����ʵ�ֽ������е�ż��λ���ں��棬����λ����ǰ��
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
//��ӡ�������
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
//	for (i = 0; i < 10; i++)//��ӡ����
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��Ŀ���ƣ�������
//��Ŀ���ݣ��ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ��� :
//A˵�������ҡ�//0
//B˵����C��   //0
//C˵����D��   //0
//D˵��C�ں�˵ //1
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭������

//int main()
//{
//	int keller = 0;
//	for (keller = 'A'; keller <= 'D'; keller++)
//	{
//		//  A˵��������         B˵����C��         C˵����D        D˵��C�ں�˵
//		if ((keller != 'A') + (keller == 'C') + (keller == 'D') + (keller != 'D') == 3)
//			printf("%c\n", keller);
//	}
//	return 0;
//}