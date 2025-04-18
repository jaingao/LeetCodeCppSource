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

        // ��ʾ��ʾ��Ϣ
        if (!prompt.empty()) {
            std::cout << prompt;
        }

        // ��ȡ��������
        std::getline(std::cin, inputLine);

        // ʹ���ַ������ָ�����
        std::istringstream iss(inputLine);
        std::string token;

        while (std::getline(iss, token, delimiter)) {
            // ������token�������ָ��������
            if (token.empty()) continue;

            // ��tokenת��ΪĿ������
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

        // ��ʾ��ʾ��Ϣ
        if (!prompt.empty()) {
            std::cout << prompt;
        }

        // ��ȡ��������
        std::getline(std::cin, inputLine);

        // ������ת��ΪĿ������
        std::istringstream converter(inputLine);
        if (!(converter >> result)) {
            // ת��ʧ��ʱ�׳��쳣
            throw std::runtime_error("�������Ͳ�ƥ��");
        }

        return result;
    }
};