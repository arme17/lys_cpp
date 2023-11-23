// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>
class Building;
class GoodGay
{
public:
	GoodGay();
	Building* building;
	void visit1();//visit 可以访问BUILDING私有成员
	void visit2();
};
class Building {
	//告诉编译器，goodGay类下的visit成员函数作为本类的好朋友，可以访问私有成员
	friend void GoodGay::visit1();
public:
	Building();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;

};
//类外实现成员函数
Building::Building()
{
	//编译器，goodGay类下的visit成员函数作为本类的好朋友，可以访问私有成员
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}
GoodGay::GoodGay()
{
	building = new Building;
}
void GoodGay::visit1()
{
	cout << "visit1 fuc正在访问" << building->m_SittingRoom << endl;
	cout << "visit1 fuc正在访问" << building->m_BedRoom << endl;
}
void GoodGay::visit2()
{
	cout << "visit2 fuc正在访问" << building->m_SittingRoom << endl;
}
int main()
{
	GoodGay gg;
	gg.visit1();
	gg.visit2();
}