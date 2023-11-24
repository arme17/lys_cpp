// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>
class person {
public:
	person(int age)
	{
		m_age = new int(age);//new int 返回的是int *，开放在堆区，手动释放
	}
	//~person()
	//{
	//	if (m_age!=NULL)
	//	{
	//		delete m_age;
	//		m_age = NULL;
	//	}
	//}
	//赋值运算符重载，钱考过
	person& operator=(person& p)
	{
		//先判断是否有属性在堆区，如果有就释放干净，再深拷贝
		if (m_age!=NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		m_age = new int(*p.m_age);//深拷贝
		return *this;
	}
	int* m_age;
};
void test01()
{
	person p1(10);
	person p2(19);
	person p3(18);
	p3 = p2 = p1;//赋值操作
	cout << *p1.m_age << endl;//*是解引用的操作
	cout << *p2.m_age << endl;
	cout << *p3.m_age << endl;
}
//赋值运算符重载 operator=,编译器提供的四个函数最后一个
int main()
{
	test01();
}
