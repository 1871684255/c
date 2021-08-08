#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void menu()
{
	printf("****************************************\n");
	printf("****   1.add              2.del     ****\n");
	printf("****   3.search           4.modify  ****\n");
	printf("****   5.show             6.sort    ****\n");
	printf("****   0.exit                       ****\n");
	printf("****************************************\n");
}

int main()
{
	int input = 0;
	CONTACT con;//创建通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			AddContact(&con);
			break;
		case del:
			DelContact(&con);
			break;
		case search:
			SearchContact(&con);
			break;
		case modify:
			ModifyContact(&con);
			break;
		case show:
			ShowContact(&con);
			break;
		case sort:
			SortContact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}