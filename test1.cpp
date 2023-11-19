// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;




int main()
{
	//int a = 100;
	//int  b = 300;

	//swap(a, b);


	////定义指针
	//int c = 10;
	////指针定义的语法，数据类*指针变量名
	//int* p;
	//p = &c;
	//cout << "c的地址为" << &c << endl;
	//cout << "指针p为" << p << endl;

	////使用指针
	////使用解引用的方式来找到指针指向的内存
	//cout << "p指向的内存为" << *p << endl;


	////指针所占的内存空间
	//int d = 10;
	//int* q = &d;
	//cout << "sizeof int*" << sizeof(int*) << endl;
	//cout << "sizeof double*" << sizeof(double*) << endl;
	//cout << "sizeof char*" << sizeof(char*) << endl;
	//cout << "sizeof float*" << sizeof(float*) << endl;
	//cout << "sizeof int*" << sizeof(q) << endl;

	//32位操作系统，四个字节
	//64位操作系统，占八个字节


	//空指针和野指针
	//1const修饰指针，指针指向可以改，指针指向的常量不能改
	//int a = 10;
	//int  b = 20;
	//const int* p = &a;
	//p = &b;
	////2const修饰常量
	//int* const p2 = &a;//指针指向不可以改，指针指向的值可以改
	//*p2 = 100;
	////3const修饰指针和常量,都不可以改
	//const int* const p3 = &a;

	////利用指针访问数组中元素
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int* p5 = arr;
	//cout << "第一个元素" << arr[0] << endl;
	//cout << "指针访问第二个元素" << *p5 << endl;
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << *p5 << endl;
	//	p5++;
	//}

	//用冒泡排序的方式排序一个数组
	//定义一个数组
	int arr[] = { 1,2,5,3,8,4,9 };
	//声明函数
	void bubblesort(int *arr, int len);
	void arrayPrint(int *arr, int len);
	//数组长度
	int len = sizeof(arr) / sizeof(arr[0]);
	//调用函数
	bubblesort(arr, len);
	arrayPrint(arr, len);
	


}
//冒泡排序的函数
void bubblesort(int *arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
//数组打印函数
void arrayPrint(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}