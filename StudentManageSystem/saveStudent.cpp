#include "common.h"


// 保存学生信息
void saveStudent()
{
	Student();

	// 打开文件
	FILE* fp = fopen("D:\\E\\vsProject\\TEXT\\studentinfo.txt", "w");

	if (fp == NULL)
	{
		cout << "打开文件失败." << endl;
		return;
	}

	// 遍历链表
	Node* p = g_pHead;
	while (p != NULL)
	{
		fwrite(&p->stu, 1, sizeof(Student), fp);
		p = p->pNext;// 下一个指针
	}

	// 关闭文件
	fclose(fp);
	cout << "\n保存数据成功！" << endl;
	system("pause");// 暂停
	system("cls"); // 清屏
}