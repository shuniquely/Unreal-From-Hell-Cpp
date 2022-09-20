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
	// ���� �����̳�

	//  vector. list�� ġ������ ����
	// -> ���ϴ� ���ǿ� �ش��ϴ� �����͸� ������ ã�� �� ����.

	// map : ���� ���� Ʈ�� (AVL)
	// - ��� ���

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

	// Ȥ�ö� ������ Ű�� �ݺ��ؼ� �����ϸ� ���� �ٲ��� �ʰ� ó�� ���Ե� ���� ����ȴ�.
	m.insert(make_pair(1, 100));
	m.insert(make_pair(1, 200));

	// 10����
	for (int i = 0; i < 100000; i++)
	{
		m.insert(pair<int, int>(i, i * 100));
	}

	// 5���� ����
	for (int i = 0; i < 50000; i++)
	{
		int randomValue = rand() % 50000;

		// Erase By Key
		m.erase(randomValue);
	}

	// Ž���� �ſ� ������

	unsigned int count = 0;
	count = m.erase(10000);
	count = m.erase(10000);

	// map ��ȸ
	for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it)
	{
		pair<const int, int>& p = (*it);
		int key = it->first;
		int value = it->second;

		cout << key << " " << value << endl;
	}

	// ������ �߰�, ������ ����
	map<int, int>::iterator findIt = m.find(10000);
	if (findIt != m.end())
	{
		findIt->second = 200;
	}
	else
	{
		m.insert(make_pair(10000, 10000));
	}

	// ������ �߰�, ������ ���� 2
	m[5] = 500;

	m.clear();

	// [] ��� �� ����
	// ������ ���� �ʾƵ� (Key/Value) ������ �����Ͱ� �߰��ȴ�!
	for (int i = 0; i < 10; i++)
	{
		cout << m[i] << endl;
	}

	// �ְ� (insert, [])
	// ���� (erase)
	// ã�� (find, [])
	// �ݺ��� (map::iterator) (*it) pair<key, value>&

	return 0;
} 