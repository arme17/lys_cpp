// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含
#include<ctime>
#include <iostream>
using namespace std;
int main()
{
    
   //嵌套循环实现星图
	for (int  i = 0; i < 10; i++)
	{
		
		for (int j = 0; j < 10; j++)
		{
			cout << "*";
		}
		cout << endl;

	}
	//打印99乘法表
	for (int i = 1; i < 10; i++)
	{
		for (int  j = 1; j < 10; j++)
		{
			if (i >= j)
			{
				cout << i << "*" << j << "=" << i * j;
			}
			
		}
		cout << endl;
	}

	//break使用时机
	//1.在switch语句中用break
	cout << "请选择副本难度" << endl;
	int select = 0;
	cin >> select;
	
	
	switch (select)
	{
	case 1:
		cout << "mormal level" << endl;
		break;
	case 2:
		cout << "medium level" << endl;
		break;
	case 3:
		cout << "hard level" << endl;
		break;

	default:
		break;
	}

	//2出现再循环语句中  //3嵌套循环语句
	for (int i = 0; i < 10; i++)
	{
		goto Flag;
	    Flag:
		if (i == 5)
		{
			break;//跳出循环语句
		}
		cout << i << endl;

	}

	//continue语句：在循环语句中跳过本次循环，执行余下未执行的语句
	//break跳出循环，不再循环了
	/*for (int i = 0; i < 100; i++)
	{
		if (i%2 ==0)
		{
			continue;

		}
		cout << i << endl;
	}*/
	//arr[5]五个数，但是下标从0开始
	/*int arr[5];
	arr[0] = 10;
	arr[1] = 11;
	arr[2] = 12;
	arr[3] = 13;
	arr[4] = 14;*/

	//
	int arr2[5] = { 10,20,30,40,50 };
	cout << arr2[0] << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << endl;
	}
	int arr3[] = { 20,30,30,40 };


	//数组名称的用途
	//1 通过数组明统计整个数组占用内存大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "整个数组占用内存空间为：" << sizeof(arr) << endl;
	cout << "每个元素所占的内存空间为：" << sizeof(arr[0]) << endl;
	cout << "元素个数" << sizeof(arr) / sizeof(arr[0]) << endl;


	//


	//2通过数组名查看数组的首地址
	cout << "数组首地址" << arr << endl;
	cout << "数组首地址" << (int)arr << endl;
	cout << "数组第一个元素首地址" << (int)&arr[0] << endl;
	cout << "数组第二个元素首地址" << (int)&arr[1] << endl;

	//五个小猪称体重取最重
	int arr4[5] = { 200,300,280,400,300 };
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		//认定一个最大值
		if (arr4[i] > max)
		{
			max = arr4[i];
		}

	}
	cout << "最重小猪为" << max << endl;

	//数组元素逆

	
}


