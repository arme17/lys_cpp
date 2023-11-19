// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>
struct Student {
	string sName;
	int score;
};

//老师结构体
struct Teacher {
	string tname;
	struct Student sArray[5];
};
//给老师和学生赋值的函数
string nameSeed = "ABCDE";
void allocateSpace(struct Teacher tArray[], int len) {
	for (int i = 0; i < len; i++)
	{
		tArray[i].tname = "Teacher_";
		tArray[i].tname += nameSeed[i];
		//通过循环给每名老师所带的学生赋值

		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "student_";
			tArray[i].sArray[j].sName += nameSeed[j];
			int random = rand() % 61 + 40;
			tArray[i].sArray[j].score = random;
		}
		
	}
}
//打印所有信息
void printInfo(struct Teacher tArray[5], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名:" << tArray[i].tname << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名" << tArray[i].sArray[j].sName << 
				"分数"<< tArray[i].sArray[j].score<<endl;
			
		}
	}
}
//学生结构体
int main()
{
	srand((unsigned int)time(NULL));
	//创建三个老师的数组
	struct Teacher tArray[3];
	//通过函数给三名老师的信息赋值，并给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	//打印所有老师及所带学生信息
	printInfo(tArray,len);


}
