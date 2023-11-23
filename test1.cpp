// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>
//类做友元
class Building;
class GoodGay
{
public :
	GoodGay();
	Building* building;
	void visit();//参观函数访问building属性


};

class Building {
	//类作为友元的内容
	friend class GoodGay;
public:
	Building();
	string m_SittingRoom;
private:

	string m_BedRoom;

};
//类外写成员函数
Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}
GoodGay::GoodGay()
{
	//创建建筑物对象
	building = new Building;//new 什么数据类型，返回什么数据类型的指针，所以用building来接收
}
void GoodGay::visit()
{
	cout << "好基友正在访问：" << building->m_SittingRoom << endl;
	cout << "好基友正在访问：" << building->m_BedRoom << endl;
		
}
void test01()
{
	GoodGay gg;
	gg.visit();
}
int main()
{
	test01();

}