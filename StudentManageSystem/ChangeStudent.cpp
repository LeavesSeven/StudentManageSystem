#include "common.h"

// 修改学生信息
void ChangeStudent()
{
	int nStuNum;
	cout << "请输入要修改信息的学生学号: " << endl;
	cin >> nStuNum;

	// 顺序查找链表
	Node* p = g_pHead;
	while (p != NULL)
	{
		// strcmp(): 字符串比较函数
		if (p->stu.stuNum == nStuNum)
		{
			cout << "请输入要修改的学生姓名 年龄 成绩: " << endl;
			cin >> p->stu.name >> p->stu.age >> p->stu.score;
			cout << "修改成功！" << endl;
			break;
		}
		p = p->pNext;
	}

	// 如果没有找到这个学号
	if (p == NULL)
	{
		cout << "没有找到该学生信息！" << endl;
	}

	system("pause");// 暂停
	system("cls"); // 清屏
}