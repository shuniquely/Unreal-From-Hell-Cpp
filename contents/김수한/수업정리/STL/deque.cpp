#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

// deque

int main()
{
	// ������ �����̳� (Sequence Container)
	// �����Ͱ� ���� ������� �����Ǵ� ����
	// vector list deque

	/*deque<int> dq;

	dq.push_back(1);
	dq.push_front(2);
	cout << dq[0] << endl;*/

	vector<int> v(3, 1);
	deque<int> dq(3, 1);

	v.push_back(2);
	v.push_back(2);

	dq.push_back(2);
	dq.push_back(2);

	dq.push_front(3);
	dq.push_front(3);

	// ���ۿ���
	// �߰� ����/���� (����)
	// ó��/�� ����/���� (����)
	// - ���� ���� (����)

	return 0;
}