#include "common.h"


// ��ȡѧ����Ϣ
void ReadStudent()
{
	// ���ļ�
	FILE* fp = fopen("D:\\E\\vsProject\\TEXT\\studentinfo.txt", "r");
	if (fp == NULL)
	{
		//
		cout << "���ļ�ʧ�ܣ�" << endl;
		return;
	}

	// ���ļ�
	Student stu;
	while (fread(&stu, 1, sizeof(Student), fp))// feof: �����ļ�ĩβ
	{
		// ����һ���ڵ㣬���������ȡ��������
		Node* pNewNode = (Node*)malloc(sizeof(Node));
		pNewNode->pNext = NULL;

		memcpy(pNewNode, &stu, sizeof(Student));

		// ͷ�巨
		if (g_pHead == NULL)
		{// �ڵ���û��ѧ������ͷ����
			g_pHead = pNewNode;
		}
		else
		{// �ڵ�����ѧ�������´���һ���ڵ� 
			pNewNode->pNext = g_pHead;
			g_pHead = pNewNode;
		}
	}
	// �ر��ļ�
	fclose(fp);
	cout << "�������ݳɹ�!" << endl;
	system("pause");// ��ͣ
	system("cls"); // ����
}