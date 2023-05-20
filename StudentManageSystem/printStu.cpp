#include "common.h"


// 打印学生信息
void printStu()
{
	system("cls"); // 清屏

	//
	cout << "******************************" << endl;
	cout << "     欢迎使用学生管理系统" << endl;
	cout << "******************************" << endl;

	cout << "*\t学号\t*\t姓名\t*\t年龄\t*\t成绩\t*" << endl;
	cout << "******************************" << endl;
	// 遍历链表
	Node* p = g_pHead;
	while (p != NULL)
	{
		cout << "*\t" << p->stu.stuNum
			<< "\t*\t" << p->stu.name
			<< "\t*\t" << p->stu.age
			<< "\t*\t" << p->stu.score
			<< "\t*" << endl;

		p = p->pNext;// 下一个指针
	}
	system("pause");// 暂停
	system("cls"); // 清屏

}