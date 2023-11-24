// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>
//多态
//多态的基本概念1 静态多态：函数重载，运算符重载属于静态多态，复用函数名
//2动态多态，派生类和虚函数运行时实现多态
//静态多态和动态多态的区别，
// 1静态多态函数地址早绑定，编译阶段确定函数地址
//2动态多态的函数地址晚绑定，运行阶段确定函数地址
//多态满足条件，有继承关系，子类重写父类中的虚函数

class Animal
{
public:
	virtual void speak()
	{
		cout << "speaking" << endl;
	}
};
class Cat :public Animal {
public:
	virtual void speak()
	{
		cout << "miao!" << endl;
	}
};
class Dog :public Animal {
public:
	virtual void  speak()
	{
		cout << "wo wo!" << endl;
	}
};
//多态使用条件，父类指针或引用指向子类对象
void doSpeak(Animal &animal)
{
	animal.speak();
}
void test01()
{
	Cat cat;
	doSpeak(cat);
	Dog dog;
	doSpeak(dog);
}
int main()
{
	test01();
}