#include"swap.h"

void swap(int a, int b)
{
	cout << "交换前" << endl;
	cout << a << endl;
	cout << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "交换后" << endl;
	cout << a << endl;
	cout << b << endl;
}