#include<string>
#include<iostream>
#include <sstream>
using namespace std;

string fill(int n, char fill_char, string param) {
	string tmp(n, fill_char);
	return param + tmp;

}

int main() {
	string a = "10";
	cout << fill(5, 'a', a);

}