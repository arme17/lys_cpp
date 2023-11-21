// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>



//成员属性设置为私有，
//1自己可以控制读写权限
//2对于写可以检测数据的有效性
class Person
{
public:
	//设置姓名
	void setName(string name)
	{
		m_name = name;
	}
	//获取姓名
	string  getName()
	{
		return m_name;

	}
	//获取年龄
	int getAge()
	{
		
		//m_age = 0;
		return m_age;
	}
	//设置年龄
	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
			cout << "年龄有误" << endl;
		}
		m_age = age;
	}
	//设置情人
	void setLover(string lover)
	{
		m_lover = lover;
	}

private:
	//姓名，可读可写
	string m_name;
	//年龄 只读
	int m_age;
	//情人 可写
	string m_lover;

};

//设计立方体类
//求立方体的面积和体积
//1创建立方体类
//2设计属性
//3设计行为 获取立方体的面积和体积
//4分别利用全局函数和成员函数 判断两个立方体是否相等
class Cube
{
public:
	//设置长
	void setL(int l)
	{
		m_L = l;
	}
	//获取长
	int getL()
	{
		return m_L;
	}

	//设置宽
	void setW(int w)
	{
		m_W = w;
	}
	//获取宽
	int getW()
	{
		return m_L;
	}

	//设置高
	void setH(int h)
	{
		m_H = h;
	}
	//获取高
	int getH()
	{
		return m_H;
	}


	//获取立方体面积
	int calculateS()
	{
		return 2 * m_L * m_H + 2 * m_L * m_W + 2 * m_W * m_H;
	}

	//获取立方体体积
	int calculateV()
	{
		return m_H * m_L * m_W;
	}

	//利用成员函数判断两个立方体是否相等
	bool isSameByClass(Cube &c)
	{
		if (m_H == c.getH() && m_L == c.getL() && m_W == c.getW())
		{
			return true;

		}
		return false;
	
	}

private:
	int m_L;
	int m_H;//高
	int m_W;
};

//利用全局函数判断，两个立方体是否相等
bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW())
	{
		return true;

	}
	return false;
}

int main()
{
	Person p;
	p.setName("张三");
	cout << "姓名为：  " << p.getName() << endl;
	p.setLover("李四");
	//cout << "情人为 " << p.m_lover << endl;
	p.setAge(19);
	cout << "年龄为：" << p.getAge() << endl;


	//创建立方体对象
	Cube c1;
	c1.setL(10);
	c1.setH(10);
	c1.setW(10);
	cout << "c1的面积为：" << c1.calculateS() << endl;
	cout << "c1的体积为" << c1.calculateV() << endl;

	//创建第二个立方体
	Cube c2;
	c2.setL(10);
	c2.setH(20);
	c2.setW(10);

	 
	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "c1 = c2" << endl;

	}
	else
	{
		cout << "c1不等于c2" << endl;
	}
	ret = c1.isSameByClass(c2);
	if (ret)
	{
		cout << "成员函数判断c1 = c2" << endl;

	}
	else
	{
		cout << "成员函数判断c1不等于c2" << endl;
	}

}