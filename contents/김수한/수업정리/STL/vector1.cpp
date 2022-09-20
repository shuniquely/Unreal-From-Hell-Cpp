#include <iostream>
#include <vector>
using namespace std;

// vector

int main()
{
	// STL (Standard Template Library)
	// ���α׷����� �� �ʿ��� �ڷᱸ��/�˰������
	// ���ø����� �����ϴ� ���̺귯��

	// �����̳�(Container) : �����͸� �����ϴ� ��ü (�ڷᱸ�� Data Structure)

	// vector (���� �迭)
	// - vector�� ���ۿ��� (size/capacity)
	// - �߰� ����/����
	// - ó��/�� ����/����
	// - ���� ����

	// �迭
	/*const int MAX_SIZE = 10;
	int arr[MAX_SIZE] = {};

	for (int i = 0; i < MAX_SIZE; i++)
		arr[i] = i;

	for (int i = 0; i < MAX_SIZE; i++)
		cout << arr[i] << endl;*/

	// ���� �迭

	// 1) (�������� �ΰ�) �޸𸮸� �Ҵ��Ѵ�
	// 2) �����б��� �� á����, �޸𸮸� �����Ѵ�
	
	
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	const int size = v.size();
	for (int i = 0; i < size; i++)
	{
		cout << v[i] << endl;
	}

	return 0;
}