// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>
//深拷贝和浅拷贝
class phone
{
public:
	phone(string pname)
	{
		cout << "phone构造函数调用" << endl;
		m_pname = pname;
	}
	string m_pname;
	~phone()
	{
		cout << "1" << endl;
	}
};
class person
{
public :
	person(string name, string pname) :m_Name(name), m_phone(pname) {
		cout << "person构造函数调用" << endl;
	}
	string m_Name;
	phone m_phone;
	~person() {
		cout << "2" << endl;
	}
};
void test()
{
	person p("张三", "iphone");
	cout << p.m_Name <<endl;
	//这里注意要先用p.m_phone再点mpname
	cout << p.m_phone.m_pname<< endl;
}
int main()
{
	test();
	
	
}

