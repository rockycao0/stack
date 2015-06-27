#include<iostream>
#include"stack.h"
using namespace std;
int main()
{
	int num;
	stack stack;
	cout << "enter the date stop with -1" << endl;
	while (true)
	{
		cin >> num;
		if (num < 0)
			break;
		stack.push(num);
		system("cls");
	}
	while (stack.size!=0)
	{
		cout << stack.pop() << endl;
	}
	system("pause");
}