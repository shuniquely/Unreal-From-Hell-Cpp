#include <iostream>
using namespace std;

// �Լ� ��ü

void HelloWorld()
{
	cout << "Hello World" << endl;
}

void HelloNumber(int number)
{
	cout << "HelloNumber " << number << endl;
}

class Knight
{
public:
	void AddHp(int addHp)
	{
		_hp += addHp;
	}

private:
	int _hp = 100;
};

class Functor
{
public:
	void operator()()
	{
		cout << "Functor Test" << endl;
		cout << _value << endl;
	}

private:
	int _value = 0;
};

int main()
{
	// �Լ� ��ü (Functor) : �Լ�ó�� �����ϴ� ��ü
	// �Լ� �������� ����

	// �Լ� ������ ����]

	void(*pfunc)(void);

	// ������ �Ѱ��� �� �����ϴ�
	pfunc = &HelloWorld;
	(*pfunc)();

	// 1) �ñ״�ó�� �ȸ����� ����� �� ����
	// pfunc = &HelloNumber;
	// 2) ���¸� ���� �� ����

	// [�Լ�ó�� ����]�ϴ� ��ü
	// () ������ �����ε�
	HelloWorld();

	// ��� ����
	// Ŭ�� <-> ����
	// ���� : Ŭ�� ������ ��Ʈ��ũ ��Ŷ�� �޾Ƽ� ó��
	// ex) Ŭ�� : �� (5, 0) ��ǥ�� �̵� ��û

	return 0;
}