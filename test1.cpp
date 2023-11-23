// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>
class person
{
	
public:

	//静态成员变量
	// 所有对象共享同一份数据
	//编译阶段就分配内存
	//类内声明，类外初始化

	static int m_a;
	int b;


	//静态成员函数
	static void func()
	{
		//b= 200;静态成员函数不可以访问非静态成员变量，因为无法区分到底是哪一个对象的b;
		m_a = 300;
		cout << "static void func调用" << endl;
	}
private:
	static int m_b;

};
 int person:: m_a = 0;
void test01(){
	person p;
	cout << p.m_a << endl;
	person p1;
	p1.m_a = 200;
	cout << p.m_a << endl;//200,所有对象共享同一份数据
}
void test02() {
	//静态变量不属于某个对象上，所有对象共享同一份数据
	//静态成员变量有两种访问方式
	//1通过对象进行访问

	//2通过类名进行访问 
	cout << "m_a" << person::m_a << endl;
	//cout << "m_b" << person::m_b << endl;私有静态成员变量也不可以访问
}

void test03()
{
	//1通过对象访问
	person p;
	p.func();
	//2通过类名访问
	person::func();
}
int main()
{

	test01();
	test02();
	test03();
}

