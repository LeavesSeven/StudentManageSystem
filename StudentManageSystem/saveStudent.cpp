#include "common.h"


// ����ѧ����Ϣ
void saveStudent()
{
	Student();

	// ���ļ�
	FILE* fp = fopen("D:\\E\\vsProject\\TEXT\\studentinfo.txt", "w");

	if (fp == NULL)
	{
		cout << "���ļ�ʧ��." << endl;
		return;
	}

	// ��������
	Node* p = g_pHead;
	while (p != NULL)
	{
		fwrite(&p->stu, 1, sizeof(Student), fp);
		p = p->pNext;// ��һ��ָ��
	}

	// �ر��ļ�
	fclose(fp);
	cout << "\n�������ݳɹ���" << endl;
	system("pause");// ��ͣ
	system("cls"); // ����
}