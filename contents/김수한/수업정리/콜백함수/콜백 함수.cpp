#include <iostream>
using namespace std;

// 콜백 (Call Back)

class Item
{
public:

public:
	int _itemId = 0;
	int _rarity = 0;
	int _ownerId = 0;
};

class FindByOwnerId
{
public:
	bool operator()(const Item* item)
	{
		return (item->_ownerId == _ownerId);
	}

public:
	int _ownerId;
};

class FindByRarity
{
public:
	bool operator()(const Item* item)
	{
		return (item->_rarity == _rarity);
	}

public:
	int _rarity;
};

template<typename T>
Item* FindItem(Item items[], int itemCount, T selector)
{
	for (int i = 0; i < itemCount; i++)
	{
		Item* item = &items[i];
		// TODO: 조건 체크

		return item;
	}

	return nullptr;
}

int main()
{
	// 콜백: 다시 호출 or 역으로 호출

	// 게임을 만들 때 이런 콜백의 개념이 자주 등장
	// ex) MoveTesk 실습 등

	// 어떤 상황이 일어나면 -> 해당 기능을 호출
	// ex) UI 스킬 버튼을 누르면 -> 스킬을 쓰는 함수를 호출

	Item items[10];

	FindByOwnerId functor1;
	functor1._ownerId = 100;

	FindByRarity functor2;
	functor2._rarity = 1;

	FindItem(items, 10, functor1);
	FindItem(items, 10, functor2);

	return 0;
}