/*
問題文
新米プログラマーであるあなたは、簡単な文字列操作を行うプログラムを作成する仕事を任されました。 名前が入力として与えられるので、正しいフォーマットに直すプログラムです。
正しい名前のフォーマットは、以下の通りです。
1 文字目は大文字アルファベット
2 文字目以降は小文字アルファベット
要件を満たすプログラムを作成してください。
*/

#include<iostream>
#include<string>
#include<algorithm>

int main() {
	std::string str;
	std::cin >> str;

	std::transform(str.cbegin(),str.cbegin()+1, str.begin(), toupper);
	std::transform(str.cbegin()+1, str.cend(), str.begin()+1, tolower);

	std::cout << str << std::endl;

	return 0;
}