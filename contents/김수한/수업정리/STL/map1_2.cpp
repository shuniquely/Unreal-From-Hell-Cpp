#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <map>
using namespace std;

// map

class Player
{
public:
	Player() : _playerId(0) { }
	Player(int playerId) : _playerId(playerId) { }

public:
	int _playerId;
};

int main()
{
	// 연관 컨테이너

	//  vector. list의 치명적인 단점
	// -> 원하는 조건에 해당하는 데이터를 빠르게 찾을 수 없다.

	// map : 균형 이진 트리 (AVL)
	// - 노드 기반

	class Node
	{
	public:
		Node* _left;
		Node* _right;
		// DATA
		pair<int, Player*> _data;
	};

	srand(static_cast<unsigned int>(time(nullptr)));

	// (Key, Value)
	map<int, int> m;

	// 혹시라도 동일한 키를 반복해서 삽입하면 값이 바뀌지 않고 처음 삽입된 값이 저장된다.
	m.insert(make_pair(1, 100));
	m.insert(make_pair(1, 200));

	// 10만명
	for (int i = 0; i < 100000; i++)
	{
		m.insert(pair<int, int>(i, i * 100));
	}

	// 5만명 퇴장
	for (int i = 0; i < 50000; i++)
	{
		int randomValue = rand() % 50000;

		// Erase By Key
		m.erase(randomValue);
	}

	// 탐색이 매우 빠르다

	unsigned int count = 0;
	count = m.erase(10000);
	count = m.erase(10000);

	// map 순회
	for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it)
	{
		pair<const int, int>& p = (*it);
		int key = it->first;
		int value = it->second;

		cout << key << " " << value << endl;
	}

	// 없으면 추가, 있으면 수정
	map<int, int>::iterator findIt = m.find(10000);
	if (findIt != m.end())
	{
		findIt->second = 200;
	}
	else
	{
		m.insert(make_pair(10000, 10000));
	}

	// 없으면 추가, 있으면 수정 2
	m[5] = 500;

	m.clear();

	// [] 사용 시 주의
	// 대입을 하지 않아도 (Key/Value) 형태의 데이터가 추가된다!
	for (int i = 0; i < 10; i++)
	{
		cout << m[i] << endl;
	}

	// 넣고 (insert, [])
	// 빼고 (erase)
	// 찾고 (find, [])
	// 반복자 (map::iterator) (*it) pair<key, value>&

	return 0;
} 