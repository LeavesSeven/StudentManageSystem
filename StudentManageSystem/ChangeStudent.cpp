#include "common.h"

// �޸�ѧ����Ϣ
void ChangeStudent()
{
	int nStuNum;
	cout << "������Ҫ�޸���Ϣ��ѧ��ѧ��: " << endl;
	cin >> nStuNum;

	// ˳���������
	Node* p = g_pHead;
	while (p != NULL)
	{
		// strcmp(): �ַ����ȽϺ���
		if (p->stu.stuNum == nStuNum)
		{
			cout << "������Ҫ�޸ĵ�ѧ������ ���� �ɼ�: " << endl;
			cin >> p->stu.name >> p->stu.age >> p->stu.score;
			cout << "�޸ĳɹ���" << endl;
			break;
		}
		p = p->pNext;
	}

	// ���û���ҵ����ѧ��
	if (p == NULL)
	{
		cout << "û���ҵ���ѧ����Ϣ��" << endl;
	}

	system("pause");// ��ͣ
	system("cls"); // ����
}