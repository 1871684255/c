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
		printf("���ʧ�ܣ�ͨѶ¼����\n");
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[ps->size].name);
		printf("�������Ա�:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("����������:>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("������绰:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	}
}

void ShowContact(const CONTACT* ps)
{
	system("cls");
	int i = 0;
	if (ps->size == 0)
		printf("ͨѶ¼Ϊ��\n");
	else
	{
		//��ӡ����
		printf("%-10s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		//��ӡ����
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
			return i;//�ҵ��˷����±�
		}
	}
	//�Ҳ�������-1
	return -1;
}

void DelContact(CONTACT* ps)
{
	system("cls");
	char name[MAX_NAME];
	int pos, j;
	if (ps->size == 0)
		printf("ɾ��ʧ�ܣ�ͨѶ¼Ϊ��\n");
	else
	{
		printf("��������Ҫɾ������ϵ�˵�����:>");
		scanf("%s", name);
		pos = FindByName(ps, name);
		if (pos == -1)
			printf("��Ҫɾ������ϵ�˲�����\n");
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const CONTACT* ps)
{
	system("cls");
	char name[MAX_NAME];
	int pos;
	if (0 == ps->size)
		printf("����ʧ�ܣ�ͨѶ¼Ϊ��\n");
	else
	{
		printf("��������Ҫ���ҵ���ϵ�˵�����:>");
		scanf("%s", name);
		pos = FindByName(ps, name);
		if (pos == -1)
			printf("���޴���\n");
		else
		{
			printf("%-10s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
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
		printf("�޸���ϵ����Ϣʧ�ܣ�ͨѶ¼Ϊ��\n");
	else
	{
		printf("��������Ҫ�޸ĵ���ϵ�˵�����:>");
		scanf("%s", name);
		pos = FindByName(ps, name);
		if (pos == -1)
			printf("����ϵ�˲�����\n");
		else
		{
			printf("����������:>");
			scanf("%s", ps->data[pos].name);
			printf("�������Ա�:>");
			scanf("%s", ps->data[pos].sex);
			printf("����������:>");
			scanf("%d", &(ps->data[pos].age));
			printf("������绰:>");
			scanf("%s", ps->data[pos].tele);
			printf("�������ַ:>");
			scanf("%s", ps->data[pos].addr);

			printf("�޸ĳɹ�\n");
		}
	}
}

void SortContact(CONTACT* ps)
{
	int i, j;
	struct PeoInfo tmp;
	if (0 == ps->size)
		printf("����ʧ�ܣ�ͨѶ¼Ϊ��\n");
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
		printf("����ɹ�\n");
	}
}