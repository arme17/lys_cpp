//�˵�����
//��װ������ʵ����
#include<iostream>
#include<string>
#define MAX 1000
using namespace std;
//1��ʾ�˵�����
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1.�����ϵ�� *****  " << endl;
	cout << "*****  2.��ʾ��ϵ�� *****  " << endl;
	cout << "*****  3.ɾ����ϵ�� *****  " << endl;
	cout << "*****  4.������ϵ�� *****  " << endl;
	cout << "*****  5.�޸���ϵ�� *****  " << endl;
	cout << "*****  6.�����ϵ�� *****  " << endl;
	cout << "*****  0.�˳�ͨѶ¼ *****  " << endl;
	cout << "***************************" << endl;
}
//�˳�����
//�����ϵ�˽ṹ��
struct Person
{
	string m_Name;
	int m_sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
};
//���ͨѶ¼�ṹ��
struct Addressbooks
{
	struct Person personArray[MAX];//�ܹ���ӵ��������
	int m_size;//
};
//2��ʾ������ϵ��
void showPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�������Ƿ���0�������0����ʾ��¼Ϊ��
	if (abs->m_size ==0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{//�����Ϊ0����ʾ��¼����ϵ����Ϣ

		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "����:    " << abs->personArray[i].m_Name<<"\t";
			cout << "�Ա�:    " << (abs->personArray[i].m_sex == 1? "��":"Ů")<<"\t";
			cout << "����:    " << abs->personArray[i].m_Age <<"\t";
			cout << "�绰:    " << abs->personArray[i].m_Phone <<"\t";
			cout << "סַ:    " << abs->personArray[i].m_Addr;
		}
	}
	system("pause");//�������������
	system("cls");//

}
//3ɾ����ϵ��
//�����ϵ���Ƿ���ڣ�������ڷ�����ϵ�����������еľ���λ�ã���������ڷ���-1
//����1 ͨѶ¼������2 �Ա�����
int isExist(Addressbooks* abs,string name)
{

	for (int  i = 0; i < abs->m_size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
			//�ҵ��Ļ�������������������еı��
		}

	}
	return -1;
}
//��װɾ����ϵ�˵Ĺ���
//����ɾ����ϵ�˵Ĺ���



//1�����ϵ��
void addPerson(Addressbooks* abs)
{
	if (abs->m_size ==MAX)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		//��Ӿ�����ϵ��

		//����
		string name;
		cout << "������������ " << endl;
		cin >> name;
		abs->personArray[abs->m_size].m_Name = name;
		//�Ա�
		int sex=0;
		cout << "�������Ա�" << endl;
		cout << "1---------��" << endl;
		cout << "2---------Ů" << endl;
		while (true)
		{
			//����������1����2�������˳�ѭ������Ϊ���������ȷ��ֵ
			//����������󣬿����������� 
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_size].m_sex = sex;
				break; 
			}
			cout << "��������" << endl;
		}
		

		//����
		int age;
		cout << "���������䣺 " << endl;
		cin >> age;
		abs->personArray[abs->m_size].m_Age = age;

		//�绰
		cout << "��������ϵ�绰" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_size].m_Phone = phone;
		//סַ
		cout << "�������ͥסַ" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_size].m_Addr = address;
		//����ͨѶ¼������
		abs->m_size++;
		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");
		
		
	}
}
int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;

	//��ʼ��ͨѶ¼�е�ǰ��������
	abs.m_size = 0;

	int select = 0;

	while (true)
	{
		showMenu();
		cin >> select;
		//�˵�����
		switch (select)
		{
		case 1://�����ϵ��
			addPerson(&abs);
			break;
		case 2://��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://ɾ����ϵ��
			
		{cout << "������ɾ����ϵ������" << endl;
		string name;
		cin >> name;
		if (isExist(&abs, name) == -1)
		{
			cout << "���޴���" << endl;
		}
		else
		{
			cout << "�ҵ���" << endl;
		}
		}
			break;
		case 4://������ϵ��
			break;
		case 5://�޸���ϵ��
			break;
		case 6://�����ϵ��
			break;
		case 0://�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
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