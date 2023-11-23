// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>
class person {
public:
	int m_a;
	static int m_b;
	void fun(){}
	static void func(){}


	//this 指针
	person(int age)
	{
		this->age = age;
		
	}
	person personAddAge(person& p)
	{
		this->age += p.age;

		//*this指向的是p2这个对象本体
		return *this;
	}
	int age;
};
//解决名称冲突
//返回对象本身this
void test01()
{
	person p1(10);
	cout << p1.age << endl;
	person p2(10);
//链式编程思想 40
	p2.personAddAge(p1).personAddAge(p1).personAddAge(p1);
	cout << p2.age << endl;
}

int main()
{

	test01();
	
}

