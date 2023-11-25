// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//time时间系统头文件的包含

#include <iostream>
using namespace std;
#include <string>
#include<ctime>
//电脑组装
//CPU。显卡，内存条抽象类
class CPU
{
public:
	virtual void calculator() = 0;
};
class VideoCard
{
public:
	virtual void display() = 0;
};
class Memory
{
public:
	virtual void storage() = 0;
};
//电脑此类
class Computer
{
public:
	Computer(CPU* c, VideoCard* v, Memory* m)
	{
		m_cpu = c;
		m_v = v;
		m_m = m;

	}
	//提供工作函数
	void doWork()
	{
		m_cpu->calculator();
		m_v->display();
		m_m->storage();
		
	}
	~Computer(){
		if (m_cpu!=NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_v!=NULL)
		{
			delete m_v;
			m_v = NULL;
		}
		if (m_m!=NULL)
		{
			delete m_m;
			m_m = NULL;
		}
	}

private:
	CPU* m_cpu;
	VideoCard* m_v;
	Memory* m_m;

	 
};

//零件商的零件
class IntelCPU :public CPU
{
public:
	virtual void calculator()
	{
		cout << "intelcpu" << endl;
	}
};
class IntelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "intel video card" << endl;
	}
};
class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "intel Memory" << endl;
	}
};
class LenovoCPU :public CPU
{
public:
	virtual void calculator()
	{
		cout << "lenovocpu" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "lenovo video card" << endl;
	}
};
class LenovoMemory :public Memory
{
	virtual void storage()
	{
		cout << "lenovo Memory" << endl;
	}
};
void test01()
{
	//第一台电脑的零件
	CPU* intelCPU = new IntelCPU;
	VideoCard* intelCard= new IntelVideoCard;
	Memory* intelMem = new IntelMemory;
	//创建第一台电脑
	Computer* computer1 = new Computer(intelCPU, intelCard, intelMem);

	//第二台电脑的零件
	CPU* levonoCPU = new LenovoCPU;
	VideoCard* levonovideocard = new LenovoVideoCard;
	Memory* levonomem = new LenovoMemory;
	//创建第二台电脑
	Computer* computer2 = new Computer(levonoCPU, levonovideocard, levonomem);

	//第三台电脑的零件
	CPU* levonocpu1 = new LenovoCPU;
	VideoCard* levonoCard1 = new LenovoVideoCard;
	Memory* intelmemory1 = new IntelMemory;
	Computer* computer3 = new Computer(levonocpu1, levonoCard1, intelmemory1);
	computer1->doWork();
	delete computer1;
	computer2->doWork();
	delete computer2;
	computer3->doWork();
	delete computer3;
	
}

int main()
{
	test01();
}