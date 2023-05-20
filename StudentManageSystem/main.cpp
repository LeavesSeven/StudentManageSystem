

#include "common.h"
#include "FindStudent.h"

int main() {

	// 循环
	while (1) {
		Welcome();

		//INPUT =============================================================
		// 接受用户输入 
		char ch = getchar();

		switch (ch)
		{
		case '1':// 录入学生信息
			inputStu();
			break;
		case '2':// 打印学生信息
			printStu();
			break;
		case '3':// 保存学生信息
			saveStudent();
			break;
		case '4':// 读取学生信息
			ReadStudent();
			break;
		case '5':// 统计所有学生人数
			cout <<"学生总人数为：" << CountStudent() << endl;
			system("pause");// 暂停
			system("cls"); // 清屏
			break;
		case '6':// 查找学生信息
		{
			Node* p = FindStudent();
			if (p != NULL)
			{
				cout << "学号: "<< p->stu.stuNum << "\t"
					 << "姓名: " << p->stu.name << "\t"
					 << "年龄: " << p->stu.age << "\t"
					 << "成绩: " << p->stu.score << endl;
			}
			else
			{
				cout <<"没有找到这个学生！"<< endl;
			}
			system("pause");// 暂停
			system("cls"); // 清屏
			break;
		}
		case '7':// 修改学生信息
			ChangeStudent();

			break;
		case '8':// 删除学生信息
			DeleteStudent();

			break;
		case '0':// 退出系统
			cout <<"Bye Bye!!! "<< endl;
			return 0;
		default:
			// cout <<"您的输入有误！请重新输入。"<< endl;
			system("pause");// 暂停
			system("cls"); // 清屏
			break;
		}


	}

	return 0;
}