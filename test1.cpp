// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>
#include<fstream>
//文本文件 写文件
//1包含头文件
//2创建流对象
//
void test01()
{
	ofstream ofs;
	//3指定打开方式
	ofs.open("text.txt", ios::out);

	//4写内容
	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：19" << endl;

	//关闭文件
	ofs.close();
}
//文本操作 读文件
void test02()
{
	//1包含头文件
	//2创建流对象
	ifstream ifs;
	ifs.open("text.txt", ios::in);
	//判断文件是否打开成功
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	//4读数据几种方式
	/*char buf[1024] = { 0 };
	while (ifs>>buf)
	{
		cout << buf << endl;
	}
	ifs.close();*/
	//第二种
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf,sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}

	//第三种
	/*string buf;
	while (getline(ifs,buf))
	{
		cout << buf << endl;
	}*/
	//第四种
	char c;
	while ((c=ifs.get())!=EOF)
	{
		cout << c;
	}
	ifs.close();
}
int main()
{

	test01();
	test02();
}
