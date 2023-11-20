//菜单功能
//封装函数现实界面
#include<iostream>
#include<string>
#define MAX 1000
using namespace std;
//1显示菜单界面
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1.添加联系人 *****  " << endl;
	cout << "*****  2.显示联系人 *****  " << endl;
	cout << "*****  3.删除联系人 *****  " << endl;
	cout << "*****  4.查找联系人 *****  " << endl;
	cout << "*****  5.修改联系人 *****  " << endl;
	cout << "*****  6.清空联系人 *****  " << endl;
	cout << "*****  0.退出通讯录 *****  " << endl;
	cout << "***************************" << endl;
}
//退出功能
//设计联系人结构体
struct Person
{
	string m_Name;
	int m_sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
};
//设计通讯录结构体
struct Addressbooks
{
	struct Person personArray[MAX];//能够添加的最大数组
	int m_size;//
};
//2显示所有联系人
void showPerson(Addressbooks* abs)
{
	//判断通讯录中人数是否是0，如果是0，提示记录为空
	if (abs->m_size ==0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{//如果不为0，显示记录的联系人信息

		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "姓名:    " << abs->personArray[i].m_Name<<"\t";
			cout << "性别:    " << (abs->personArray[i].m_sex == 1? "男":"女")<<"\t";
			cout << "年龄:    " << abs->personArray[i].m_Age <<"\t";
			cout << "电话:    " << abs->personArray[i].m_Phone <<"\t";
			cout << "住址:    " << abs->personArray[i].m_Addr;
		}
	}
	system("pause");//按着任意键继续
	system("cls");//

}
//3删除联系人
//检查联系人是否存在，如果存在返回联系人所在数组中的具体位置，如果不存在返回-1
//参数1 通讯录，参数2 对比姓名
int isExist(Addressbooks* abs,string name)
{

	for (int  i = 0; i < abs->m_size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
			//找到的话，返回这个人在数组中的编号
		}

	}
	return -1;
}
//封装删除联系人的功能
//测试删除联系人的功能



//1添加联系人
void addPerson(Addressbooks* abs)
{
	if (abs->m_size ==MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		//添加具体联系人

		//姓名
		string name;
		cout << "请输入姓名： " << endl;
		cin >> name;
		abs->personArray[abs->m_size].m_Name = name;
		//性别
		int sex=0;
		cout << "请输入性别：" << endl;
		cout << "1---------男" << endl;
		cout << "2---------女" << endl;
		while (true)
		{
			//如果输入的是1或者2，可以退出循环，因为输入的是正确的值
			//如果输入有误，可以重新输入 
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_size].m_sex = sex;
				break; 
			}
			cout << "重新输入" << endl;
		}
		

		//年龄
		int age;
		cout << "请输入年龄： " << endl;
		cin >> age;
		abs->personArray[abs->m_size].m_Age = age;

		//电话
		cout << "请输入联系电话" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_size].m_Phone = phone;
		//住址
		cout << "请输入家庭住址" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_size].m_Addr = address;
		//更新通讯录中人数
		abs->m_size++;
		cout << "添加成功" << endl;
		system("pause");
		system("cls");
		
		
	}
}
int main()
{
	//创建通讯录结构体变量
	Addressbooks abs;

	//初始化通讯录中当前人数个数
	abs.m_size = 0;

	int select = 0;

	while (true)
	{
		showMenu();
		cin >> select;
		//菜单调用
		switch (select)
		{
		case 1://添加联系人
			addPerson(&abs);
			break;
		case 2://显示联系人
			showPerson(&abs);
			break;
		case 3://删除联系人
			
		{cout << "请输入删除联系人姓名" << endl;
		string name;
		cin >> name;
		if (isExist(&abs, name) == -1)
		{
			cout << "查无此人" << endl;
		}
		else
		{
			cout << "找到了" << endl;
		}
		}
			break;
		case 4://查找联系人
			break;
		case 5://修改联系人
			break;
		case 6://清空联系人
			break;
		case 0://退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	
	system("pause");
	return 0;
}