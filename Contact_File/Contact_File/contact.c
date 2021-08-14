#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void CheckCapacity(CONTACT* ps);

void LoadContact(CONTACT* ps)
{
	PeoInfo tmp = { 0 };
	FILE* pf = fopen("contact.dat", "rb");
	if (pf == NULL)
	{
		perror("LocdContact file opening failed");
		return;
	}

	//读取文件放到通讯录中
	//每次从文件中读取1个sizeof(PeoInfo)字节大小的数据
	//当文件为空时或读取完时fread的返回值为0，自动停止读取文件
	while (fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		CheckCapacity(ps);//判断是否需要增容

		ps->data[ps->size] = tmp;
		ps->size++;
	}

	fclose(pf);
	pf = NULL;
}

void InitContact(CONTACT* ps)
{
	ps->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));

	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
	//把文件中已经存放的通讯录中的信息加载到通讯录中
	LoadContact(ps);
}

void CheckCapacity(CONTACT* ps)
{
	if (ps->size == ps->capacity)
	{
		PeoInfo* pt = realloc(ps->data, (ps->capacity + 2)*sizeof(PeoInfo));
		if (pt == NULL)
		{
			perror("增容失败\n");
		}
		else
		{
			ps->data = pt;
			pt = NULL;
			ps->capacity += 2;
			printf("增容成功\n");
		}
	}
}

void AddContact(CONTACT* ps)
{
	system("cls");

	//检测当前通讯录的容量,如果满了，就增加空间
	//如果不满，啥事都不干
	CheckCapacity(ps);

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
		else
		{
			for (j = pos; j < ps->size - 1; j++)
			{
				ps->data[j] = ps->data[j + 1];
			}
			ps->size--;
			printf("删除成功\n");
		}
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

void SaveContact(CONTACT* ps)
{
	int i = 0;
	FILE* pf = fopen("contact.dat", "wb");
	if (pf == NULL)
	{
		perror("SaveContact file opening failed");
		return;
	}

	//将通讯录中的数据写入到文件中
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(PeoInfo), 1, pf);
	}

	fclose(pf);
	pf = NULL;

}