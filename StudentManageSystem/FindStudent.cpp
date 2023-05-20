#include "common.h"


// 查找学生信息
Node* FindStudent() 
{
	//
	int nStuNum;
	char stuName[20];

	cout << "请输入要查找学生的学号：" << endl;
	cin >> nStuNum;

	cout << "请输入要查找学生的姓名：" << endl;
	cin >> stuName;

	// 顺序查找链表
	Node* p = g_pHead;
	while (p != NULL)
	{
		// strcmp(): 字符串比较函数
		if (p->stu.stuNum == nStuNum || 0 == strcmp(p->stu.name, stuName))
		{
			return p;
		}
		p = p->pNext;
	}

	// 没有找到
	return NULL;
}
