#include"swap.h"

void swap(int a, int b)
{
	cout << "����ǰ" << endl;
	cout << a << endl;
	cout << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "������" << endl;
	cout << a << endl;
	cout << b << endl;
}