// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>
//多态案例2，制作饮品
//煮水，冲泡，倒入杯中，加入辅料
class AbstractDrinking
{
public:
	//煮水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯中
	virtual void PourInCup() = 0;
	//加入辅料
	virtual void PourSomeThing() = 0;

	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PourSomeThing();
	}
};
class Coffee :public AbstractDrinking
{
public:
	virtual  void Boil()
	{
		cout << "煮农夫水" << endl;
	}
	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}
	virtual void PourSomeThing()
	{
		cout << "加入糖和牛奶" << endl;
	}
};
class Tea :public AbstractDrinking
{
public:
	virtual  void Boil()
	{
		cout << "煮农夫水" << endl;
	}
	virtual void Brew()
	{
		cout << "冲泡茶水" << endl;
	}
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}
	virtual void PourSomeThing()
	{
		cout << "加入柠檬" << endl;
	}
};
void doWork(AbstractDrinking* abs)//，如何调用里面的接口
//AbstractDrinking* abs = new Coffee;父类的指针指向子类的对象，
{
	abs->makeDrink();
	delete abs;//手动释放
}
void test01()
{
	doWork(new Coffee);//new 关键字在堆区开辟内存，
	doWork(new Tea);
}
int main()
{
	test01();
}
