class stack
{
public:
	stack();
	void push(int num);
	int pop();
	int size;
private:
	int longth;
	int *menber;
	void expand();
	void abstract();
};