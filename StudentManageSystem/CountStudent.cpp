#include "common.h"

// 统计所有学生人数
int CountStudent() {
	//
	int nCount = 0; // 学生总数
	// 遍历链表
	Node* p = g_pHead;
	while (p != NULL)
	{
		// 
		nCount++;
		p = p->pNext;
	}

	return nCount;
}