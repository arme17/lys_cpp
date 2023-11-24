// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>
//动物类
class Animal
{
public:
	virtual void speak()//用virtual实现地址晚绑定
	{
		cout << "speaking" << endl;
	}
	int m_age;
};
class Cat :public Animal {
public:
	 void speak()
	{
		cout << "miao~" << endl;
	}
};

//羊类
class Sheep :virtual public Animal {

};
//驼类
class Tuo :virtual public Animal{

};


class SheepTuo :public Sheep, public Tuo {

};
//执行说话的函数
void doSpeak(Animal& animal)
{
	animal.speak();

}
void test03()
{
	Cat cat;
	doSpeak(cat);//编译阶段就确定了函数地址
}
void test02()
{
	SheepTuo st;
	st.Sheep::m_age = 19;
	st.Tuo::m_age = 20;
	cout << st.Sheep::m_age << endl;
	cout << st.Tuo::m_age << endl;
	cout << st.m_age << endl;
}
//继承中的同名静态成员处理方式 
class Base
{
public:
	
	static int m_a;


};
int Base::m_a = 100;
class Son :public Base
{
public:
	static int m_a;

};
int Son::m_a = 200;//类外初始化
//同名静态成员属性
void test01()
{
	//通过对象访问
	Son s;
	cout << s.m_a << endl;
	cout << s.Base::m_a << endl;
	//通过类名访问
	cout << Son::m_a << endl;
	cout << Son::Base::m_a << endl; 
}
//同名静态成员函数
int main()
{
	//test01();
	test02();
	test03();
}
