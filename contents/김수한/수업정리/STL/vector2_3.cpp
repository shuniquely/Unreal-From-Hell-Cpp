#include <iostream>
#include <vector>
using namespace std;

// vector

int main()
{
	// �����̳�(Container) : �����͸� �����ϴ� ��ü (�ڷᱸ�� Data Structure)

	// vector (���� �迭)
	// - vector�� ���ۿ��� (size/capacity)
	// - �߰� ����/����
	// - ó��/�� ����/����
	// - ���� ����

	// �ݺ��� (Iterator) : �����Ϳ� ����, �����̳��� ����(������)�� ����Ű��, ����/���� ���ҷ� �̵� ����
	vector<int> v(10);

	for (vector<int>::size_type i = 0; i < v.size(); i++)
		v[i] = i;

	vector<int>::iterator it;
	int* ptr;

	it = v.begin();
	ptr = &v[0];

	/*cout << (*it) << endl;
	cout << (*ptr) << endl;*/

	vector<int>::iterator itBegin = v.begin();
	vector<int>::iterator itEnd = v.end();

	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << (*it) << endl;
	}

	int* ptrBegin = &v[0];
	int* ptrEnd = ptrBegin + 10;
	for (int* ptr = ptrBegin; ptr != ptrEnd; ++ptr)
	{
		cout << (*ptr) << endl;
	}

	// vector = ���� �迭 = �������� Ŀ���� �迭 = �迭
	// ���Ұ� �ϳ��� �޸� ��Ͽ� �����ϰ� ����ȴ�.
	
	// �߰�/ó�� ����/������ ��ȿ����
	// �� ����/������ ������

	return 0;
}