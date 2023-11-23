// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>

//空指针调用成员函数
class person
{
public :
	void showclassname()
	{
		cout << "this is person class" << endl;
	}
	int m_age;
	void showpersonage()
	{
		//健壮性
		if (this==NULL)
		{
			return;
		}
		cout << "age =" << m_age<<endl;
	}
	//常函数，const修饰的是this指针，this指针的指向不可以修改，指向的值不可以改，除非用mutable修饰变量
	void showperson() const 
	{
		this->m_b = 100;
	}
	mutable int m_b;
	int m_a;
};
class Building {
	friend void goodGay(Building* building);
public:
	Building()
	{
		m_sittingRome = "客厅";
		m_bedRoom = "卧室";
	}
public:
	string m_sittingRome;
private:
	string m_bedRoom;
};

void test01()
{
	/*person* p = NULL;
	p->showClassName();
	 p->showPersonAge();*/
	 const person p;//常对象
	// p.showPerson();
	 p.m_b = 100;
	 //p.m_a = 200;

	
}
//全局函数做友元
void goodGay(Building *building)
{
	cout << "好基友全局函数在访问:" << building->m_sittingRome << endl;
	cout << "好基友全局函数在访问:" << building->m_bedRoom << endl;

}

int main()
{
	Building b;
	goodGay(&b);
	test01();
	
}

