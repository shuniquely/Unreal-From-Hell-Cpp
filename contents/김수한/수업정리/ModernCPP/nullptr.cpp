#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

// nullptr

class Knight
{

};

Knight* FindKnight()
{
	// TODO

	return nullptr;
}

void Test(int a)
{
	cout << "Test(int)" << endl;
}

void Test(void* ptr)
{
	cout << "Test(*)" << endl;
}

// NullPtr ����
class NullPtr
{
public:
	template<typename T>
	operator T* () const
	{
		return 0;

	}

	template<typename C, typename T>
	operator T C::* () const
	{
		return 0;
	}

private:
	void operator&() const;
};

const NullPtr _NullPtr;

int main()
{
	int* ptr = nullptr;
	// 0 NULL 

	// 1) ������
	Test(0);
	Test(NULL);
	Test(nullptr);

	// 2) ������
	auto knight = FindKnight();
	if (knight == _NullPtr)
	{

	}

	nullptr_t whoami = nullptr;

	return 0;
}