#include "common.h"

// ͳ������ѧ������
int CountStudent() {
	//
	int nCount = 0; // ѧ������
	// ��������
	Node* p = g_pHead;
	while (p != NULL)
	{
		// 
		nCount++;
		p = p->pNext;
	}

	return nCount;
}