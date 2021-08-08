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
	int size;//记录当前已有元素的个数
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

//函数声明
//通讯录初始化函数
void InitContact(CONTACT* ps);
//添加联系人函数
void AddContact(CONTACT* ps);
//打印通讯录
void ShowContact(const CONTACT* ps);
//删除联系人函数
void DelContact(CONTACT* ps);
//查找联系人函数
void SearchContact(const CONTACT* ps);
//修改联系人函数
void ModifyContact(CONTACT* ps);
//排序
void SortContact(CONTACT* ps);