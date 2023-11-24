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

//计算器类

class Calculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_num1 + m_num2;
		}
		else if (oper == "-")
		{
			return m_num1 - m_num2;
		}
		else if (oper == "*")
		{
			return m_num1 * m_num2;
		}	
		else if(oper == "/")
		{
			return m_num1 / m_num2;
		}
		//扩展新功能，需要修改源码
	}
	int m_num1;
	int m_num2;
};
void test01()
{
	//创建一个计算器对象
	Calculator c;
	c.m_num1 = 10;
	c.m_num2 = 10;
	cout << c.m_num1 << "+" << c.m_num2 << "=" << c.getResult("+") << endl;
}
//利用多态实现器
//实现计算器的抽象类
class AbstractCalculator {
public:
	virtual int getResult()
	{
		return 0;
	}

	int m_num1;
	int m_num2;
};

//设计加法计算器类
class AddCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_num1 + m_num2;
	}
};
class SubCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_num1 - m_num2;
	}
};
class MulCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_num1 * m_num2;
	}
};
class DevCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_num1 / m_num2;
	}
};
//多态的使用条件，父类的指针或者引用指向子类的对象
void test02()
{
	AbstractCalculator* abc = new AddCalculator;
	abc->m_num1 = 10;
	abc->m_num2 = 10;
	cout << abc->m_num1 << "+" << abc->m_num2 << "=" << abc->getResult() << endl;
	delete abc;
	//减法运算
	abc = new SubCalculator;
	abc->m_num1 = 10;
	abc->m_num2 = 3;
	cout << abc->m_num1 << "-" << abc->m_num2 << "=" << abc->getResult() << endl;
	delete abc;//用完销毁掉
	//乘法运算
	abc = new MulCalculator;
	abc->m_num1 = 10;
	abc->m_num2 = 10;
	cout << abc->m_num1 << "*" << abc->m_num2 << "=" << abc->getResult() << endl;
	delete abc;
}
int main()
{
	//test01();
	test02();
}