#include "common.h"

// ¼��ѧ����Ϣ
void inputStu()
{
	// ����һ���½ڵ�
	Node* pNewNode = (Node*)malloc(sizeof(Node));// �����ڴ�
	// ��ʼ��
	pNewNode->pNext = NULL;

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

	cout << "������ѧ��������" << endl;
	cin >> pNewNode->stu.name;
	cout << "������ѧ�����䣺" << endl;
	cin >> pNewNode->stu.age;
	cout << "������ѧ��ѧ�ţ�" << endl;
	cin >> pNewNode->stu.stuNum;
	cout << "������ѧ���ɼ���" << endl;
	cin >> pNewNode->stu.score;

	cout << "ѧ����Ϣ¼��ɹ���" << endl;
	system("pause");// ��ͣ

	system("cls"); // ����

}