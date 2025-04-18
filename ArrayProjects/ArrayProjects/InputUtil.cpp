#include <iostream>
#include <vector>
#include <string>
#include <sstream>

class InputUtil
{
public:
	template<typename T>
	static std::vector<T> InputVector(const std::string& prompt = "", char delimiter = ' ')
	{
        std::vector<T> result;
        std::string inputLine;

        // 显示提示信息
        if (!prompt.empty()) {
            std::cout << prompt;
        }

        // 获取整行输入
        std::getline(std::cin, inputLine);

        // 使用字符串流分割输入
        std::istringstream iss(inputLine);
        std::string token;

        while (std::getline(iss, token, delimiter)) {
            // 跳过空token（连续分隔符情况）
            if (token.empty()) continue;

            // 将token转换为目标类型
            std::istringstream converter(token);
            T value;
            if (converter >> value) {
                result.push_back(value);
            }
        }

        return result;
	}

    template<typename T>
    static T InputT(const std::string& prompt = "") {
        T result;
        std::string inputLine;

        // 显示提示信息
        if (!prompt.empty()) {
            std::cout << prompt;
        }

        // 获取整行输入
        std::getline(std::cin, inputLine);

        // 将输入转换为目标类型
        std::istringstream converter(inputLine);
        if (!(converter >> result)) {
            // 转换失败时抛出异常
            throw std::runtime_error("输入类型不匹配");
        }

        return result;
    }
};