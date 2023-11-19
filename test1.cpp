// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
//创建学生数据类型，学生包括（姓名，年龄，分数）

//自定义数据类型，一些类型集合组成的一些类型

struct Student
{
	//成员列表

	//姓名
	string name;


	//年龄
	int age;

	//分数
	int score;



}s3;
struct Teacher 
{
	int id;//5教师编号
	string name;//教师姓名
	int age;//教师年龄
	struct Student stu;

};

//2通过学生类型创建具体学生

//2.1struct student s1
//2.2struct student s2 ={}
int main()
{
	//1结构体的基本概念
	//2定义方式1

	struct Student s1;
	s1.name = "张三";
	s1.age = 19;
	s1.score = 100;
	cout << "姓名" << s1.name << "年龄" << s1.age << "fenshu" << s1.score << endl;

	//定义方式2
	struct Student s2 = {"no4",19,90};
	cout << "姓名" << s2.name << "年龄" << s2.age << "fenshu" << s2.score << endl;
	//定义结构体时候顺便创建结构体变量,少用

	s3.name = "no5";
	s3.age = 19;
	s3.score = 30;

	
	//3.1创建结构体数组
	struct Student stuArray[3] =
	{
		{"张三",19,399},
		{"李四",39,340},
		{"王五",29,899}
	};
	//3.2给结构体数组中的元素赋值

	stuArray[2].name = "赵六";
	stuArray[2].age = 80;
	stuArray[2].score = 90;

	//3.3遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << "姓名" << stuArray[i].name << stuArray[i].age << stuArray[i].score << endl;

	}

	//4结构体指针，利用指针访问结构体成员
	//4.1创建结构体（已有
	//4.2创建学生结构体变量
	struct Student s =
	{
		"zhangsan ",19,399
	};


	//4.3通过指针指向结构体变量
	struct  Student* p = &s;//利用指针指向结构体变量的地址
	


	//4.4通过指针访问结构体变量中的数据
	//通过结构体指针访问结构体中的属性，需要利用“  ->  ”
	cout << "name:  "<<p->name << "age:"<<p->age <<"fenshu "<< p->score << endl;

	//5结构体嵌套结构体
	Teacher teacher1;
	teacher1.age = 1000;
	teacher1.id = 1234;
	teacher1.name = "laowang";

	teacher1.stu.name = "xiaowang";
	teacher1.stu.age = 19;

	teacher1.stu.score = 90;
	cout << "老师名字" << teacher1.name << "老师id " << teacher1.id << "老师姓名 " << teacher1.name << endl;
	cout << teacher1.stu.name << teacher1.stu.age << teacher1.stu.score << endl;
	//例子老师带一个学生，老师结构体的属性，编号，名字，年龄，带的学生struct Student
	//struct student 姓名，年龄，考试分数，学生结构体作为老师结构体中的成员，嵌套

	
}
