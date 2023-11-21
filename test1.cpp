// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>

class person
{
public:
	//构造函数
	
	person(int a)
	{
		age = a;
		cout << "person的有参构造函数" << endl;
	}
	
	//拷贝构造函数
	person(const person& p)
	{
		age = p.age;
		cout << "person的拷贝构造函数" << endl;
	}

	int age;
};



//调用
void test01()
{
	//括号法
	//person p1;
	person p2(10);
	person p3(p2);
	cout << "p2.age = " << p2.age << endl;
	cout << "p3.age = " << p3.age << endl;
	//显示法
	person p5 = person(10);
	person p4 = person(p3);
	person(10);//匿名对象，执行完马上释放掉
	//隐式转换法
	person p6 = 10; //person p6 = person(10);
	person p7 = p4;

}
int main()
{


	test01();
}

