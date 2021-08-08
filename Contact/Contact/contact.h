#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

typedef struct Contact
{
	struct PeoInfo data[MAX];
	int size;//��¼��ǰ����Ԫ�صĸ���
}CONTACT;

enum Option
{
	EXIT,
	add,
	del,
	search,
	modify,
	show,
	sort
};

//��������
//ͨѶ¼��ʼ������
void InitContact(CONTACT* ps);
//�����ϵ�˺���
void AddContact(CONTACT* ps);
//��ӡͨѶ¼
void ShowContact(const CONTACT* ps);
//ɾ����ϵ�˺���
void DelContact(CONTACT* ps);
//������ϵ�˺���
void SearchContact(const CONTACT* ps);
//�޸���ϵ�˺���
void ModifyContact(CONTACT* ps);
//����
void SortContact(CONTACT* ps);