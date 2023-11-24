// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>

//继承的好处减少重复代码
//语法class 子类：继承方式 父类
//子类也成为派生类
//父类称为基类

class BasePage 
{
public:
	void header()
	{

	}
	void footer()
	{
		cout << "帮助中心，交流合作，站内地图" << endl;
	}
	void left()
	{
		cout << "java,python,c++" << endl;

	}

};
//java页面
class Java :public BasePage
{
public:
	void content()
	{
		cout << "java学科视频" << endl;
	}
};


//python页面

class Python :public BasePage
{
public:
	void content()
	{
		cout << "python学科视频" << endl;
	}
};
//cpp页面
class cpp :public BasePage
{
public:
	void content()
	{
		cout << "cpp学科视频" << endl;
	}
};

class Base1 
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;

};
class son1 :public Base1 
{
public:
	void func() {
		m_a = 10;//父类公共，子类公共
		m_b = 20;//父类保护，子类保护
		//m_c = 20;//父类私有，子类不可访问
	}

};
class son2 :protected Base1
{
public:
	void func()
	{
		m_a = 100;//父类公共，子类保护
		m_b = 100;//父类保护，子类保护

			//m_c = 200;//父类中私有成员访问不到
	}

};

//私有继承、
class son3 :private Base1 {
public:
	void func()
	{
		m_a = 100;//父类公共，子类私有
		m_b = 200;//父类保护，子类私有
		//m_c = 200;//父类私有，子类访问不到

	}
};
class Grandson3 :public son3
{
public:
	void func() {
		//m_a = 100;//子类私有，孙类访问不到
	}
};
void test01()
{
	Java ja;
	ja.content();
	son1 s1;
	s1.m_a = 100;//公共类外可以访问，保护，私有类外不可
	son2 s2;
	//s2.m_a = 200;//保护继承，类外访问不到
	
}
int main()
{
	test01();
}