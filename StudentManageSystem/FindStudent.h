#pragma once

#include "common.h"

// ����һ��ѧ��
typedef struct _Student
{
	char name[20];// ����
	//bool sex;       // �Ա�
	int age; // ����
	int stuNum; // ѧ��
	int score; // �ɼ�
}Student;

// һ�����ᣨװѧ����������
typedef struct _Node
{
	Student stu; // ѧ��
	struct _Node* pNext;// ָ����һ���ڵ�
}Node;

Node* g_pHead = NULL; // ͷ���


Node* FindStudent();
