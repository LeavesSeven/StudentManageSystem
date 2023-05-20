
#include "common.h"

// 删除学生信息
void DeleteStudent()
{
	int nStuNum;
	cout << "请输入要删除的学生学号: " << endl;
	cin >> nStuNum;

	Node* p1;

	// 删除链表的一个节点
	// 如果是头结点
	if (g_pHead->stu.stuNum == nStuNum)
	{
		// 备份头结点
		p1 = g_pHead;
		// 头结点的下一个节点变为头结点
		g_pHead = g_pHead->pNext;
		//释放原来头结点的空间
		free(p1);
		cout << "删除成功!" << endl;

		system("pause");// 暂停
		system("cls"); // 清屏
		return;
	}

	// 如果不是头结点
	Node* p = g_pHead;
	Node* p2; // p2用来备份
	while (p->pNext != NULL)
	{
		if (p->pNext->stu.stuNum == nStuNum)
		{
			p2 = p->pNext;
			p->pNext = p->pNext->pNext;
			// 释放
			free(p2);
			cout << "删除成功!" << endl;

			system("pause");// 暂停
			system("cls"); // 清屏
			return;
		}

		p = p->pNext; // 循环条件
		if (p->pNext == NULL) // 是否最后一个节点
		{
			break;
		}
	}

	if (p->pNext == NULL)
	{
		//一直没找到
		cout << "没有找到这个学员!" << endl;
	}

	system("pause");// 暂停
	system("cls"); // 清屏
}
