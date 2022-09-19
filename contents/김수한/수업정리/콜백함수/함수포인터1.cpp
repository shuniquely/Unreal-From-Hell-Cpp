#include <iostream>
using namespace std;

// 함수 포인터

int Add(int a, int b)
{
	return a + b;
}

int Sub(int a, int b)
{
	return a - b;
}

class Item
{
public:
	Item() : _itemId(0), _rarity(), _ownerId(0)
	{

	}

public:
	int _itemId;
	int _rarity;
	int _ownerId; 
};

Item* FindItem(Item items[], int itemCount, bool(*selector)(Item* item, int value), int value)
{
	for (int i = 0; i < itemCount; i++)
	{
		Item* item = &items[i];
		if (selector(item, 100))
			 return item;
	}

	return nullptr;
}

bool IsRareItem(Item* item, int value)
{
	return item->_rarity >= value;
}

bool IsOwnerItem(Item* item, int ownerId)
{
	return item-> _ownerId == ownerId;
}

int main()
{
	int a = 10;

	typedef int DATA;
	
	DATA* pointer = &a;

	// 함수
	typedef int(FUNC_TYPE)(int a, int b);
	// using FUNC_TYPE = int(int a, int b);

	FUNC_TYPE* fn;

	// fn = Add;
	fn = Sub;

	int result = fn(1, 2);
	cout << result << endl;

	int result2 = (*fn)(1, 2); // 이것도 함수 주소!
	cout << result2 << endl;

	Item items[10] = {};
	items[3]._rarity = 2;
	Item* rareItem = FindItem(items, 10, IsOwnerItem, 100);

	return 0;
}