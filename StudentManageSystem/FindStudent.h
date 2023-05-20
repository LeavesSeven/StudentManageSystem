#pragma once

#include "common.h"

// 定义一个学生
typedef struct _Student
{
	char name[20];// 姓名
	//bool sex;       // 性别
	int age; // 年龄
	int stuNum; // 学号
	int score; // 成绩
}Student;

// 一个车厢（装学生），链表
typedef struct _Node
{
	Student stu; // 学生
	struct _Node* pNext;// 指向下一个节点
}Node;

Node* g_pHead = NULL; // 头结点


Node* FindStudent();
