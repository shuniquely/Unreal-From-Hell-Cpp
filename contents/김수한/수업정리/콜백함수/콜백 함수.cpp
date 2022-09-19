#include <iostream>
using namespace std;

// �ݹ� (Call Back)

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
		// TODO: ���� üũ

		return item;
	}

	return nullptr;
}

int main()
{
	// �ݹ�: �ٽ� ȣ�� or ������ ȣ��

	// ������ ���� �� �̷� �ݹ��� ������ ���� ����
	// ex) MoveTesk �ǽ� ��

	// � ��Ȳ�� �Ͼ�� -> �ش� ����� ȣ��
	// ex) UI ��ų ��ư�� ������ -> ��ų�� ���� �Լ��� ȣ��

	Item items[10];

	FindByOwnerId functor1;
	functor1._ownerId = 100;

	FindByRarity functor2;
	functor2._rarity = 1;

	FindItem(items, 10, functor1);
	FindItem(items, 10, functor2);

	return 0;
}