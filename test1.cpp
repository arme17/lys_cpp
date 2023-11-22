// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>

/// <summary>
///拷贝构造函数的调用时机
/// 1使用一个已经创建完毕的对象来初始化一个新对象
/// 2值传递的方式来给函数参数传值
/// 3值方式来返回局部对象
/// </summary>
class person
{
public:
	
	person()
	{
		cout << "person默认构造函数调用" << endl;
	}
	person(int age)
	{
		m_age = age;
		cout << "person有参构造函数调用" << endl;
	}
	person(const person& p)
	{
		m_age = p.m_age;
		cout << "person拷贝构造函数调用" << endl;
	}

	~person() {
		cout << "person析构函数调用" << endl;
	}
	int m_age;
private:

};

void test01()
{
	person p;
	p.m_age = 19;
	person p2(p);
	cout << "p2.age=  " << p2.m_age << endl;
}


int main()
{

	person p;
	test01();
	//doWork(p);
}

