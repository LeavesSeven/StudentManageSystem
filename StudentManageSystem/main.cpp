

#include "common.h"
#include "FindStudent.h"

int main() {

	// ѭ��
	while (1) {
		Welcome();

		//INPUT =============================================================
		// �����û����� 
		char ch = getchar();

		switch (ch)
		{
		case '1':// ¼��ѧ����Ϣ
			inputStu();
			break;
		case '2':// ��ӡѧ����Ϣ
			printStu();
			break;
		case '3':// ����ѧ����Ϣ
			saveStudent();
			break;
		case '4':// ��ȡѧ����Ϣ
			ReadStudent();
			break;
		case '5':// ͳ������ѧ������
			cout <<"ѧ��������Ϊ��" << CountStudent() << endl;
			system("pause");// ��ͣ
			system("cls"); // ����
			break;
		case '6':// ����ѧ����Ϣ
		{
			Node* p = FindStudent();
			if (p != NULL)
			{
				cout << "ѧ��: "<< p->stu.stuNum << "\t"
					 << "����: " << p->stu.name << "\t"
					 << "����: " << p->stu.age << "\t"
					 << "�ɼ�: " << p->stu.score << endl;
			}
			else
			{
				cout <<"û���ҵ����ѧ����"<< endl;
			}
			system("pause");// ��ͣ
			system("cls"); // ����
			break;
		}
		case '7':// �޸�ѧ����Ϣ
			ChangeStudent();

			break;
		case '8':// ɾ��ѧ����Ϣ
			DeleteStudent();

			break;
		case '0':// �˳�ϵͳ
			cout <<"Bye Bye!!! "<< endl;
			return 0;
		default:
			// cout <<"���������������������롣"<< endl;
			system("pause");// ��ͣ
			system("cls"); // ����
			break;
		}


	}

	return 0;
}