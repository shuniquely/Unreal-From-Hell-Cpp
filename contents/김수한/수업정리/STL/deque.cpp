#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

// deque

int main()
{
	// 시퀀스 컨테이너 (Sequence Container)
	// 데이터가 삽입 순서대로 나열되는 형태
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

	// 동작원리
	// 중간 삽입/삭제 (느림)
	// 처음/끝 삽입/삭제 (빠름)
	// - 임의 접근 (가능)

	return 0;
}