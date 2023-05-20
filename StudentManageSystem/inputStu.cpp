#include "common.h"

// 录入学生信息
void inputStu()
{
	// 创建一个新节点
	Node* pNewNode = (Node*)malloc(sizeof(Node));// 分配内存
	// 初始化
	pNewNode->pNext = NULL;

	// 头插法
	if (g_pHead == NULL)
	{// 节点里没有学生，从头插入
		g_pHead = pNewNode;
	}
	else
	{// 节点里有学生，重新创建一个节点 
		pNewNode->pNext = g_pHead;
		g_pHead = pNewNode;
	}

	cout << "请输入学生姓名：" << endl;
	cin >> pNewNode->stu.name;
	cout << "请输入学生年龄：" << endl;
	cin >> pNewNode->stu.age;
	cout << "请输入学生学号：" << endl;
	cin >> pNewNode->stu.stuNum;
	cout << "请输入学生成绩：" << endl;
	cin >> pNewNode->stu.score;

	cout << "学生信息录入成功！" << endl;
	system("pause");// 暂停

	system("cls"); // 清屏

}