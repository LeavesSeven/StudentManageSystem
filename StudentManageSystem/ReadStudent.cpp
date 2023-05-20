#include "common.h"


// 读取学生信息
void ReadStudent()
{
	// 打开文件
	FILE* fp = fopen("D:\\E\\vsProject\\TEXT\\studentinfo.txt", "r");
	if (fp == NULL)
	{
		//
		cout << "打开文件失败！" << endl;
		return;
	}

	// 读文件
	Student stu;
	while (fread(&stu, 1, sizeof(Student), fp))// feof: 读到文件末尾
	{
		// 创建一个节点，用来保存读取到的数据
		Node* pNewNode = (Node*)malloc(sizeof(Node));
		pNewNode->pNext = NULL;

		memcpy(pNewNode, &stu, sizeof(Student));

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
	}
	// 关闭文件
	fclose(fp);
	cout << "加载数据成功!" << endl;
	system("pause");// 暂停
	system("cls"); // 清屏
}