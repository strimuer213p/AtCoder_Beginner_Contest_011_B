/*
��蕶
�V�ăv���O���}�[�ł��邠�Ȃ��́A�ȒP�ȕ����񑀍���s���v���O�������쐬����d����C����܂����B ���O�����͂Ƃ��ė^������̂ŁA�������t�H�[�}�b�g�ɒ����v���O�����ł��B
���������O�̃t�H�[�}�b�g�́A�ȉ��̒ʂ�ł��B
1 �����ڂ͑啶���A���t�@�x�b�g
2 �����ڈȍ~�͏������A���t�@�x�b�g
�v���𖞂����v���O�������쐬���Ă��������B
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