#include "stack.h"
stack::stack()
{
	stack::longth = 16;
	stack::size = 0;
	menber = new int(longth);
}
void stack::push(int num)
{
	if (stack::size > stack::longth)
	{
		expand();
	}
	menber[size] = num;
	size += 1;
}
int stack::pop()
{
	int temp = menber[size];
	int *temp2 = new int[size - 1];
	for (int i = 0; i < size; i++)
	{
		temp2[i] = menber[i];
	}
	for (int i = 0; i < size; i++)
	{
		menber[i] = temp2[i];
	}
	size -= 1;
	return temp;
}
void stack::expand()
{
	if (size <= longth)
		return;
	int *temp=new int[size];
	for (int i = 0; i < size; i++)
	{
		temp[i] = menber[i];
	}
	menber = new int[size + 16];
	for (int i = 0; i < (size + 16); i++)
	{
		menber[i] = temp[i];
	}
	delete temp;
	longth += 16;
}