// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>
#include<fstream>
class person
{
public:
	char m_name[64];
	int m_age;
};

void test01()
{
	/*ofstream ofs("person.txt", ios::out | ios::binary);
	person p = { "张三",19 };
	ofs.write((const char*)&p, sizeof(person));
	ofs.close();*/
	ifstream ifs("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;

	}
	person p;
	ifs.read((char*)&p, sizeof(person));
	cout << "姓名" << p.m_name << "年龄" << p.m_age << endl;
	ifs.close();
	

}
int main()
{
	test01();
}