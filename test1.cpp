// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>
int a = 10;
int b = 20;


//2在堆区利用new开辟数组



//栈区数据不要返回局部变量的地址
int* func()
{
	int a = 10;
	return &a;
}
//堆区开辟数据
int* func1()
{//利用new关键字可以将数据开辟在堆区
	int* p = new int(10);//用new开辟一块内存，用指针接收返回的编号
	return p;
}
int main()
{
		//在堆区开辟数据
	int* p1 = func1();
	cout << *p1 << endl;
	//栈区数据不要返回局部变量的地址
	int*p =  func();
	cout << *p << endl;
	cout << *p << endl;//乱码
	//全局区

	//全局变量、
	cout << "全局变量地址" << (int)&a << endl;
	cout << "全局变量地址" << (int)&b << endl;
	//静态变量、常量
	static int s_a = 10;
	static int s_b = 12;
	cout << "静态变量地址" << (int)&s_a << endl;
	cout << "静态变量地址" << (int)&s_b << endl;
	//创建普通局部变量
	int la = 10;
	int lb = 20;
	cout << "局部变量地址" << (int)&la << endl;
	cout << "局部变量地址" << (int)&lb << endl;
	//字符串常量


	//const

}