#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void InitContact(CONTACT* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}

void AddContact(CONTACT* ps)
{
	system("cls");
	if (ps->size == MAX)
		printf("添加失败，通讯录已满\n");
	else
	{
		printf("请输入姓名:>");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入性别:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入电话:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}
}

void ShowContact(const CONTACT* ps)
{
	system("cls");
	int i = 0;
	if (ps->size == 0)
		printf("通讯录为空\n");
	else
	{
		//打印标题
		printf("%-10s\t%-5s\t%-5s\t%-12s\t%-20s\n", "姓名", "性别", "年龄", "电话", "地址");
		//打印数据
		for (i = 0; i < ps->size; i++)
		{
			printf("%-10s\t%-5s\t%-5d\t%-12s\t%-20s\n", ps->data[i].name,
				ps->data[i].sex,
				ps->data[i].age,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

static int FindByName(const CONTACT* ps, char name[MAX_NAME])
{
	int i;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(name, ps->data[i].name))
		{
			return i;//找到了返回下标
		}
	}
	//找不到返回-1
	return -1;
}

void DelContact(CONTACT* ps)
{
	system("cls");
	char name[MAX_NAME];
	int pos, j;
	if (ps->size == 0)
		printf("删除失败，通讯录为空\n");
	else
	{
		printf("请输入您要删除的联系人的姓名:>");
		scanf("%s", name);
		pos = FindByName(ps, name);
		if (pos == -1)
			printf("您要删除的联系人不存在\n");
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void SearchContact(const CONTACT* ps)
{
	system("cls");
	char name[MAX_NAME];
	int pos;
	if (0 == ps->size)
		printf("查找失败，通讯录为空\n");
	else
	{
		printf("请输入您要查找的联系人的姓名:>");
		scanf("%s", name);
		pos = FindByName(ps, name);
		if (pos == -1)
			printf("查无此人\n");
		else
		{
			printf("%-10s\t%-5s\t%-5s\t%-12s\t%-20s\n", "姓名", "性别", "年龄", "电话", "地址");
			printf("%-10s\t%-5s\t%-5d\t%-12s\t%-20s\n", ps->data[pos].name,
				ps->data[pos].sex,
				ps->data[pos].age,
				ps->data[pos].tele,
				ps->data[pos].addr);
		}
	}
}

void ModifyContact(CONTACT* ps)
{
	system("cls");
	char name[MAX_NAME];
	int pos;
	if (0 == ps->size)
		printf("修改联系人信息失败，通讯录为空\n");
	else
	{
		printf("请输入您要修改的联系人的姓名:>");
		scanf("%s", name);
		pos = FindByName(ps, name);
		if (pos == -1)
			printf("该联系人不存在\n");
		else
		{
			printf("请输入姓名:>");
			scanf("%s", ps->data[pos].name);
			printf("请输入性别:>");
			scanf("%s", ps->data[pos].sex);
			printf("请输入年龄:>");
			scanf("%d", &(ps->data[pos].age));
			printf("请输入电话:>");
			scanf("%s", ps->data[pos].tele);
			printf("请输入地址:>");
			scanf("%s", ps->data[pos].addr);

			printf("修改成功\n");
		}
	}
}

void SortContact(CONTACT* ps)
{
	int i, j;
	struct PeoInfo tmp;
	if (0 == ps->size)
		printf("排序失败，通讯录为空\n");
	else
	{
		for (i = 0; i < ps->size - 1; i++)
		{
			for (j = 0; j < ps->size - 1 - i; j++)
			{
				if (strcmp(ps->data[j].name, ps->data[j + 1].name) > 0)
				{
					tmp = ps->data[j];
					ps->data[j] = ps->data[j + 1];
					ps->data[j + 1] = tmp;
				}
			}
		}
		printf("排序成功\n");
	}
}