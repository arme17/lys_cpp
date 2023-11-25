// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>
class Animal
{
public:
	Animal()
	{
		cout << "animal构造函数调用" << endl;
	}
	//virtual ~Animal()//父类的析构作为虚函数，可以走子类的析构
	//	//利用虚析构可以解决父类指针释放子类对象时不干净的问题
	//{
	//	cout << "animal析构函数调用" << endl;
	//}
	virtual ~Animal() = 0;//纯虚析构必须有具体实现，上面虚析构也有具体实现
	//有纯虚析构在是抽象类，无法实例化对象
	virtual void speak() = 0;
};
Animal::~Animal()
{
	cout << "animal纯虚析构函数调用" << endl;
}
class Cat :public Animal
{
public :

	Cat(string name)
	{
		cout << "cat 构造函数调用" << endl;
		m_name = new string(name);
	}	
	virtual void speak()
	{
		cout << *m_name<<" miao~" << endl;
	}
	~Cat()
	{
		if (m_name!=NULL)
		{
			cout << "cat析构" << endl;
			m_name = NULL;
		}
	}
	string* m_name;
};
void test01()
{
	Animal* animal = new Cat("tom");
	animal->speak();
	delete animal;
}

int main()
{
	test01();
}