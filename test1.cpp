// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>
//打印数据函数
void showValue(const int& val)
{
	//val = 1000;不可以修改了
	cout << "val = " << val << endl;
}
//函数重载，让函数名相同，提高复用性
//函数重载满足条件，1同一个作用域下2函数名称相同，3函数参数类型不同，个数不同，顺序不同
void showValue(double a)
{
	cout << "a =" << a<<endl;
}
//注意事项，函数返回值不可以作为函数重载的条件

//函数重载的注意事项
//1 引用作为函数重载的条件
void func(const int& a)//int &a = 10;
{
	cout << "const" << endl;
}
void func(int& a)//const int &a = 10;
{
	cout << "普通" << endl;
}
//2 函数重载碰到默认参数
int main()
{
	//使用场景，使用形参来防止误操作
	int a = 100;
	showValue(a);
	double b = 3.14;
	showValue(b);
	int& ref = a;//引用必须引用一块合法的内存空间
	//const int& ref = 10;
	int c = 10;
	func(c);//不走const,走可读可写的函数
	func(10);

	system("pause");
	return 0;
}