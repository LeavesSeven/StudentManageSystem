#include "common.h"

// 初始界面
void Welcome()
{
	system("cls"); // 清屏

	// 用户选项
	cout << "******************************" << endl;
	cout << "    欢迎使用学生管理系统" << endl;
	cout << "******************************" << endl;
	cout << "         请选择功能" << endl;
	cout << "******************************" << endl;
	cout << "      1.录入学生信息" << endl;
	cout << "      2.打印学生信息" << endl;
	cout << "      3.保存学生信息" << endl;
	cout << "      4.读取学生信息" << endl;
	cout << "      5.统计所有学生人数" << endl;
	cout << "      6.查找学生信息" << endl;
	cout << "      7.修改学生信息" << endl;
	cout << "      8.delete学生信息" << endl;
	cout << "      0.退出系统" << endl;
	cout << "******************************" << endl;
	cout << "输入0-8:" << endl;
}