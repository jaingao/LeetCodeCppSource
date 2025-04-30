#include <iostream>
#include <vector>
#include "InputUtil.cpp"
#include "704ErFenSearch.cpp"
#include "27RemoveArrayElement.cpp"
#include "LCS.cpp"

#define NUMBER 1143

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
#endif
}