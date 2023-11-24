// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>
class person {
public:
	person(string name, int age)
	{
		m_age = age;
		m_name = name;
	}
	//重载关系运算符==
	bool operator==(person& p)
	{
		if (this->m_age==p.m_age&&this->m_name==p.m_name)
		{
			return true;
		}
		return false;
	}
	bool operator!=(person& p)
	{
		if (this->m_age == p.m_age && this->m_name == p.m_name)
		{
			return false;
		}
		return true;
	}

	
	string m_name;
	int m_age;
};
class MyPrint {
public:

	//函数调用运算符() 重载
	void operator()(string test)
	{
		cout << test << endl;
	}
};
class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};
void test01()
{
	person p1("tom", 29);
	person p2("jack", 29);
	if (p1==p2)
	{
		cout << "p1=p2" << endl;
	}
	
	if (p1 != p2)
	{
		cout << "p1!=p2" << endl;
	}
}

void test02()
{
	MyPrint myprint;
	myprint("helloworld");//仿函数,没太大限制
	
}
void test03()
{
	MyAdd myadd;
	int ret = myadd(1, 2);
	cout << ret << endl;
	//匿名函数对象，算完立即释放
	cout << MyAdd()(100,100) << endl;
	//
	
}
int main()
{
	test01();
	test02();
	test03();
}
