// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>
//要求： 定义英雄结构体，录入数据，利用冒泡排序对年龄进行排序输出

struct Hero
{
	string name;
	int age;
	string sex;
};
//冒泡排序实现年龄升序排列
void bubbleSort(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;

			}
		}

	}
}
void printHero(struct Hero heroArray[], int len) {
	for (int i = 0; i < len; i++)
	{
		cout << "姓名  " << heroArray[i].name << "  年龄 " << heroArray[i].age << "性别" << heroArray[i].sex << endl;

	}
}

int main()
{
	struct Hero heroArray[5] =
	{
		{"刘备",23,"男性"},
		{"关羽",22,"男性"},
		{"张飞",20,"男性"},
		{"赵云",21,"男性"},
		{"貂蝉",19,"女性"},
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	for (int i = 0; i < len; i++)
	{
		cout<< "姓名  "<< heroArray[i].name << "  年龄 " <<heroArray[i].age<<"性别"<<heroArray[i].sex<<endl;

	}
	cout << "排序后的结果" << endl;
	
	//3对数组进行排序，按照年龄进行升序排序
	bubbleSort(heroArray, len);
	//4将排序后的结果打印输出
	printHero(heroArray, len);
	


}
