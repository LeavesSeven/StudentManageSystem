#include "common.h"


// ����ѧ����Ϣ
Node* FindStudent() 
{
	//
	int nStuNum;
	char stuName[20];

	cout << "������Ҫ����ѧ����ѧ�ţ�" << endl;
	cin >> nStuNum;

	cout << "������Ҫ����ѧ����������" << endl;
	cin >> stuName;

	// ˳���������
	Node* p = g_pHead;
	while (p != NULL)
	{
		// strcmp(): �ַ����ȽϺ���
		if (p->stu.stuNum == nStuNum || 0 == strcmp(p->stu.name, stuName))
		{
			return p;
		}
		p = p->pNext;
	}

	// û���ҵ�
	return NULL;
}
