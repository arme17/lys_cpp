// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>
//1new的基本语法
int* func()
{
	//堆区创建整型数据
	//new 返回该数据类型的指针
	int* p = new int(10);
	return p;
}
void test1()
{
	int* p = func();
	cout << *p << endl;
	delete p;
	//内存已经被释放，再次访问就是非法操作cout << *p << endl;
}
//2堆区利用new开辟数组
void test2()
{
	//创建10整型数据的数组，在堆区,小括号，存放10，中括号，有十个元素【10】，返回连续线性空间的首地址
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;//给十个元素赋值

	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	delete[] arr;//释放数组时加一个中括号
}

//交换函数

//1值传递
void mySwap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap c = " << a << endl;
	cout << "swap d = " << b << endl;
}
//2地址传递
void mySwap2(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//引用传递
void mySwap3(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap3 c = " << a << endl;
	cout << "swap3 d = " << b << endl;
}

int main()
{
	test1();
	test2();
	int c = 20;
	int d = 30;
	mySwap1(c,d);
	cout << "值传递c = "<<c << endl;
	cout << "值传递d = "<<d << endl;
	mySwap2(&c, &d);
	cout << "地址传递c = " << c << endl;
	cout << "地址传递d = " << d << endl;
	int e = 20;
	int f = 30;
	mySwap3(e,f);
	cout << "引用传递c = " << e<< endl;
	cout << "引用传递d = " << f << endl;

	//3引用的基本语法
	//数据类型 &别名 = 原名
	int a = 20;
	int& b = a;
	cout << a << endl;
	cout << b << endl;
	b = 100;
	cout << a << endl;
	cout << b << endl;
	//引用必须初始化
	int a1 = 10;
	int &c1 = a1;
	//引用初始化以后不可以改变了
	

}