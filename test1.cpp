// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>
//加号运算符重载
class MyInterger {
	friend ostream& operator<<(ostream& cout, MyInterger myint);
public:
	MyInterger()
	{
		m_num = 0;
	}
	MyInterger& operator++()
	{
		m_num++;
		//返回该对象本身，类比++a
		return *this;

	}
	
	//重载后置++运算符,返回的是值，因为局部变量在函数执行完毕后会被释放掉，所以应该返回值
	MyInterger operator++(int)
	{
		//先记录当前结果
		MyInterger temp = *this;
		m_num++;
		return temp;

	}
	MyInterger& operator--()
	{
		m_num--;
		return *this;
	}
	MyInterger operator--(int)
	{
		MyInterger temp = *this;
		m_num--;
		return temp;
	}
private:
	int m_num;
};
//重载<<运算符
ostream& operator<<(ostream& cout, MyInterger myint)
{
	cout << myint.m_num;
	return cout;
}

void test01()
{
	MyInterger myint;
	cout << ++(++(++myint)) << endl;
	cout << myint << endl;
}

void test02()
{
	MyInterger myint;
	cout << myint++ << endl;
	cout << myint << endl;//h后置递增先记录表达式，再递增

	
}
void test03()
{
	MyInterger myint;
	cout <<--myint << endl;
	cout << myint << endl;
}
void test04()
{
	MyInterger myint;
	cout << myint-- << endl;
	cout << myint << endl;
}
int main()
{
	test01();
	cout << "____________" << endl;
	test02();
	cout << "____________" << endl;
	test03();
	cout << "____________" << endl;
	test04();
}