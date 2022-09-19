#include <iostream>
using namespace std;

// 함수 포인터
// typedef의 진실
// typedef 왼쪽 오른값 -> 오른쪽 (커스텀 타입 정의)
// 정확히는 왼쪽/오른쪽 기준이 아닌
// [선언 문법]에서 typedef를 앞쪽에 붙힌다.

// typedef int(Knight::* PMEMFUNC)(int, int); // 멤버 함수 포인터

int Test(int a, int b)
{
	cout << "Test" << endl;
	return a + b;
}

int main()
{
	// 함수 포인터
	int (*fn)(int, int);

	// typedef int(FUNC_TYPE)(int, int);
	// FUNC_TYPE* fn;

	fn = &Test; // & 생략 가능 (C언어 호환성 때문)

	fn(1, 2);

	(*fn)(1, 2);

	return 0;
}