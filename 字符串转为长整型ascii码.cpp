#include<string>
#include<iostream>
#include <sstream>
using namespace std;

long long string2ascii(const string& str) //将8位字符串转换为ascii码，方便运算
{
	string res_tmp = "0x";
	string tmp;
	stringstream ss;
	for (int i = 0; i < str.size(); i++)
	{
		ss << hex << int(str[i]) << endl;
		ss >> tmp;
		res_tmp += tmp;
	}
	long long result = strtoll(res_tmp.c_str(), NULL, 16);

	return result;
}

int main() {
	cout << hex<<string2ascii("12345678");

}