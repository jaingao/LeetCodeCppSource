#include <iostream>
#include <vector>
#include "InputUtil.cpp"
#include "704ErFenSearch.cpp"

#define NUMBER 704

int main()
{
#if NUMBER == 704
	std::vector<int> intVector = InputUtil::InputVector<int>("请输入一行整数，以空格分割：", ' ');
	int target = InputUtil::InputT<int>("请输入要查找的数字：");
	int ret = ErFenSearch::search(intVector, target);
#elif NUMBER == 705

#endif
}