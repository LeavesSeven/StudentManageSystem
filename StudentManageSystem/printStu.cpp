#include "common.h"


// ��ӡѧ����Ϣ
void printStu()
{
	system("cls"); // ����

	//
	cout << "******************************" << endl;
	cout << "     ��ӭʹ��ѧ������ϵͳ" << endl;
	cout << "******************************" << endl;

	cout << "*\tѧ��\t*\t����\t*\t����\t*\t�ɼ�\t*" << endl;
	cout << "******************************" << endl;
	// ��������
	Node* p = g_pHead;
	while (p != NULL)
	{
		cout << "*\t" << p->stu.stuNum
			<< "\t*\t" << p->stu.name
			<< "\t*\t" << p->stu.age
			<< "\t*\t" << p->stu.score
			<< "\t*" << endl;

		p = p->pNext;// ��һ��ָ��
	}
	system("pause");// ��ͣ
	system("cls"); // ����

}