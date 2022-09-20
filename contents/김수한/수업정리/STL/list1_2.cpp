#include <iostream>
#include <vector>
#include <list>
using namespace std;

// list

// vector: 동적 배열

class Node
{
public:
	Node* _next;
	Node* _prev;
	int _data;
};

// 단일 / 이중 / 원형
// list: 연결 리스트

// [1] -> [2] -> [3] -> [4] -> [5]
// [1] <-> [2] <-> [3] <-> [4] <-> [5]
// [1] <-> [2] <-> [3] <-> [4] <-> [5] <->

int main()
{
	// list (연결 리스트)
	// - list의 동작 원리
	// - 중간 삽입/삭제 (빠름)
	// - 처음/끝 삽입/삭제 (빠름)
	// - 임의 접근 (기능 없음)

	list<int> li;

	list<int>::iterator itRemember;

	for (int i = 0; i < 100; i++)
	{
		if (i == 50)
		{
			itRemember = li.insert(li.end(), i);
			continue;
		}

		li.push_back(i);
	}

	// li.push_front(10);
	int size = li.size();
	// li.capacity(); // 없음

	int first = li.front();
	int last = li.back();

	// li[3] = 10; // 없음

	list<int>::iterator itBegin = li.begin();
	list<int>::iterator itEnd = li.end();

	/*list<int>::iterator itTest1 = --itBegin;
	list<int>::iterator itTest2 = --itEnd;
	list<int>::iterator itTest3 = ++itEnd;*/

	int* ptrBegin = &(li.front());
	int* ptrEnd = &(li.back());

	for (list<int>::iterator it = li.begin(); it != li.end(); ++it)
	{
		cout << *it << endl;
	}

	/*li.insert(itBegin, 100);

	li.erase(li.begin());
	
	li.pop_front();

	li.remove(10);*/

	// 임의접근이 느린데 삽입삭제가 빠르다?

	list<int>::iterator it = li.begin();
	for (int i = 0; i < 50; i++)
		++it;

	li.erase(itRemember);

	return 0;
}