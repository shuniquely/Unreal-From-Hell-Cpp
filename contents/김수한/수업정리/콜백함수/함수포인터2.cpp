#include <iostream>
using namespace std;

// �Լ� ������
// typedef�� ����
// typedef ���� ������ -> ������ (Ŀ���� Ÿ�� ����)
// ��Ȯ���� ����/������ ������ �ƴ�
// [���� ����]���� typedef�� ���ʿ� ������.

// typedef int(Knight::* PMEMFUNC)(int, int); // ��� �Լ� ������

int Test(int a, int b)
{
	cout << "Test" << endl;
	return a + b;
}

int main()
{
	// �Լ� ������
	int (*fn)(int, int);

	// typedef int(FUNC_TYPE)(int, int);
	// FUNC_TYPE* fn;

	fn = &Test; // & ���� ���� (C��� ȣȯ�� ����)

	fn(1, 2);

	(*fn)(1, 2);

	return 0;
}