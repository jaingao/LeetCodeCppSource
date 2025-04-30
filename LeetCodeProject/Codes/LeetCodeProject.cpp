#include <iostream>
#include <vector>
#include "Utils/InputUtil.cpp"
#include "Array/27RemoveArrayElement.cpp"
#include "Array/704ErFenSearch.cpp"
#include "DynamicPlanning/1143LCS.cpp"
#include "DynamicPlanning/509FIB.cpp"
#define NUMBER 509

int main()
{
#if NUMBER == 704
	std::vector<int> intVector = InputUtil::InputVector<int>("请输入一行整数，以空格分割：", ' ');
	int target = InputUtil::InputT<int>("请输入要查找的数字：");
	int ret = ErFenSearch::search(intVector, target);
#elif NUMBER == 27
	std::vector<int> intVector = InputUtil::InputVector<int>("请输入一行整数，以空格分割：", ' ');
	int target = InputUtil::InputT<int>("请输入要移除的数字：");
	int length = RemoveArrayElement::removeElement(intVector, target);
#elif NUMBER == 1143
	int ret = LCS::longestCommonSubsequence("abcde", "ace");
#elif NUMBER == 509
	int n = InputUtil::InputT<int>("请输入要计算的斐波那契数列的项数：");
	int ret = FIB::fib(n);
	std::cout << "斐波那契数列第" << n << "项为：" << ret << std::endl;
#endif
}