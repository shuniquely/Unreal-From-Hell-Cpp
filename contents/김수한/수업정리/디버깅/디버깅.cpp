#include <iostream>
using namespace std;

// �����

void Test2()
{
	int b = 0;
}

void Test1()
{
	int a = 0;

	Test2();
}

int main()
{
	int number = 10;

	Test1();

	return 0;
}