// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
#include<string.h>
using namespace std;
int main()
{
	////////实现数组逆置
	////////1创建数组
	//////int arr1[5] = { 1,2,3,4,5 };
	//////cout << "原数组为" << endl;

	//////for (int i = 0; i < 5; i++)
	//////{
	//////	cout << arr1[i] << endl;

	//////}

	////////2实现逆置
 //////  //2.1定义数组的下标start 和end
	////////2.2利用temp存储交换前的数组
	////////2.3利用循环遍历

	//////int start = 0;
	//////int end = sizeof(arr1) / sizeof(arr1[0])-1;
	//////while (start<end)
	//////{
	//////	int temp = arr1[start];
	//////	arr1[start] = arr1[end];
	//////	arr1[end] = temp;
	//////	
	//////	start++;
	//////	end--;
	//////}



	////////3打印逆置后的数组
 //////   
	//////cout << "逆数组为" << endl;

	//////for (int i = 0; i < 5; i++)
	//////{
	//////	cout << arr1[i] << endl;

	//////}

	
	////冒泡排序
	//int arr1[9] = { 2,4,0,5,7,9,8,3,1 };
	//cout << "排序前的数组为" << endl;
	//for (int i = 0; i < 9; i++)
	//{
	//	cout << arr1[i] << endl;
	//}
	//int temp = 0;
	//for (int i = 0; i < 9-1; i++)
	//{
	//	for (int j = 0; j < 9-i-1; j++)
	//	{
	//		if (arr1[j] > arr1[j + 1])
	//		{
	//			temp = arr1[j];
	//			arr1[j] = arr1[j + 1];
	//			arr1[j + 1] = temp;
	//		}

	//	}
	//}
	//cout << "排序后的数组为" << endl;
	//for (int i = 0; i < 9; i++)
	//{
	//	cout << arr1[i];
	//}
	//int arr[][3] = { 1,2,3,4,5,6 };
	//cout << sizeof(arr[0][0]) << endl;

	////二维数组名，查看数组所占的内存空间，获取二维数组的首地址
	//cout << "第一个元素首地址" << (int)&arr[0][0] << endl;
	//
	//二维数组案例

	//考试成绩统计

	int scores[3][3] = {
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string names[3] = { "zhangsan", "lisi","wangwu"};
	//统计每个人的总和分数
	for (int  i = 0; i < 3; i++)
	{
		int sum = 0;//统计分数总和变量
		for (int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
			
		}
		cout <<names[i]<< "总分为" << sum << " ";
		cout << endl;
	}
}


