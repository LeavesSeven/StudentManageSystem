
#include "common.h"

// ɾ��ѧ����Ϣ
void DeleteStudent()
{
	int nStuNum;
	cout << "������Ҫɾ����ѧ��ѧ��: " << endl;
	cin >> nStuNum;

	Node* p1;

	// ɾ�������һ���ڵ�
	// �����ͷ���
	if (g_pHead->stu.stuNum == nStuNum)
	{
		// ����ͷ���
		p1 = g_pHead;
		// ͷ������һ���ڵ��Ϊͷ���
		g_pHead = g_pHead->pNext;
		//�ͷ�ԭ��ͷ���Ŀռ�
		free(p1);
		cout << "ɾ���ɹ�!" << endl;

		system("pause");// ��ͣ
		system("cls"); // ����
		return;
	}

	// �������ͷ���
	Node* p = g_pHead;
	Node* p2; // p2��������
	while (p->pNext != NULL)
	{
		if (p->pNext->stu.stuNum == nStuNum)
		{
			p2 = p->pNext;
			p->pNext = p->pNext->pNext;
			// �ͷ�
			free(p2);
			cout << "ɾ���ɹ�!" << endl;

			system("pause");// ��ͣ
			system("cls"); // ����
			return;
		}

		p = p->pNext; // ѭ������
		if (p->pNext == NULL) // �Ƿ����һ���ڵ�
		{
			break;
		}
	}

	if (p->pNext == NULL)
	{
		//һֱû�ҵ�
		cout << "û���ҵ����ѧԱ!" << endl;
	}

	system("pause");// ��ͣ
	system("cls"); // ����
}
